#!/usr/bin/env python3
"""Full structural dump of the Vocord LPR2 (lprconfig) binary file.

Layout reconstructed by reversing TrafficAnalizerDll.dll:
  header: 'LPR2', ver=1@+8, libcount@+0x10, [0x20]=13,7,3 (major,minor,libs)
  table:  libcount entries of 8 bytes: (lib_id, lib_version)
  then: SLD-matrix record, then -1 + "LPFORMATS" + lib blobs.
  lib blob: [fmt_count][X][Y][glyph_count]
            glyph list: entry0 = (wchar,wchar,float), next = (ff,flag,wchar,wchar,float) 16 bytes
            matrix: 0x20215 dwords (font features + mask strings at +8/+0x408)
            fmt_count x 10608-byte format records (masks 'z'/'*', glyph classes)
            FONT section: [06][00]...
"""
import struct, sys

SRC = '/home/rafa/vocord/lprconfig_by-lt-lv_1F.binary'
data = open(SRC, 'rb').read()
out = open('/home/rafa/vocord/analysis/lprconfig_dump.txt', 'w', encoding='utf-8')

def w(s=''):
    out.write(s + '\n')

def u32(o): return struct.unpack_from('<I', data, o)[0]
def i32(o): return struct.unpack_from('<i', data, o)[0]
def f32(o): return struct.unpack_from('<f', data, o)[0]
def wchar(o): return chr(struct.unpack_from('<H', data, o)[0])
def u16str(o, maxn=64):
    s = ''
    for i in range(maxn):
        c = struct.unpack_from('<H', data, o + i * 2)[0]
        if c == 0: break
        s += chr(c)
    return s

w('=' * 100)
w('VOCORD LPR2 CONFIG DUMP: %s' % SRC)
w('file size: %d (0x%X)' % (len(data), len(data)))
w('=' * 100)

# ---- top header
w()
w('[HEADER]')
w('  magic      : %r' % data[0:4])
w('  version    : %d (at +8)' % u32(8))
w('  libcount   : %d (at +0x10)' % u32(0x10))
w('  field+0x14 : %d' % u32(0x14))
w('  field+0x18 : %d' % u32(0x18))
maj, mino, libs = data[0x20], data[0x21], data[0x22]
w('  version bytes (+0x20): %d.%d, libraries=%d' % (maj, mino, libs))
w('  table (+0x23), %d entries of 8 bytes (lib_id, lib_version):' % libs)
tbl = []
for i in range(libs):
    a, b = u32(0x23 + i * 8), u32(0x23 + i * 8 + 4)
    tbl.append((a, b))
    w('    [%d] lib_id=%d ver=%d' % (i, a, b))

w()
w('[MATRIX RECORD] 0x3B .. (first -1)')
first_ff = data.find(b'\xff\xff\xff\xff', 0x23 + libs * 8)
w('  record span: 0x%X .. 0x%X (%d bytes)' % (0x3b, first_ff, first_ff - 0x3b))
o = 0x3b
w('  head dwords: %s' % [u32(o + i * 4) for i in range(7)])
w('  (0, 4=dims, 3=submatrices, 280=glyph dim, 16, 12, 1)')

pos = first_ff + 4
name = data[pos:pos + 9]
w('  -1 separator at 0x%X, name after: %r' % (first_ff, name))
pos += 9

# ---- library blobs
for lib in range(libs):
    w()
    w('=' * 100)
    w('[LIBRARY %d] blob starts at 0x%X' % (lib, pos))
    fmt_count, libx, liby, glyph_count = u32(pos), u32(pos + 4), u32(pos + 8), u32(pos + 12)
    w('  format_count = %d' % fmt_count)
    w('  field X (+4) = %d' % libx)
    w('  field Y (+8) = %d' % liby)
    w('  glyph_count  = %d' % glyph_count)
    # glyph list: entry0 = 8 bytes (c,c,float); rest = 16 bytes (ff,flag,c,c,float)
    gl = pos + 16
    w('  glyph list at 0x%X:' % gl)
    glyphs = []
    o = gl
    c0, c1 = wchar(o), wchar(o + 2)
    f0 = f32(o + 4)
    glyphs.append((c0, f0))
    w('    [ 0] char=%r float=%.3f (first entry, 8 bytes)' % (c0, f0))
    o += 8
    for i in range(1, glyph_count):
        ff, flag = u32(o), u32(o + 4)
        c0, c1 = wchar(o + 8), wchar(o + 10)
        f = f32(o + 12)
        glyphs.append((c0, f))
        w('    [%2d] sep=%08X flag=%d char=%r (u+%04X) float=%.3f' % (
            i, ff, flag, c0, ord(c0), f))
        o += 16
    matrix_off = gl + glyph_count * 16  # copy size = count<<4 (includes 8-byte hdr tail)
    w('  glyph copy block ends at 0x%X' % matrix_off)
    w('  matrix (font features) copied from 0x%X, %d dwords (%d bytes)' % (
        matrix_off, 0x20215, 0x20215 * 4))
    w('    (prefix at 0x%X: %08X %08X)' % (o, u32(o), u32(o + 4)))
    mo = matrix_off
    w('    matrix[+0] = %d, [+4] = %d' % (u32(mo), u32(mo + 4)))
    s1 = u16str(mo + 8)
    s2 = u16str(mo + 0x408)
    w('    mask string 1 (+8):  %r  (len %d)' % (s1, len(s1)))
    w('    mask string 2 (+408): %r  (len %d)' % (s2, len(s2)))
    fmt_off = matrix_off + 0x20215 * 4
    for fi in range(fmt_count):
        fb = fmt_off + fi * 10608
        w('  [FORMAT %d] record at 0x%X (10608 bytes)' % (fi, fb))
        w('    +0x00 = %d (0x%X)' % (u32(fb), u32(fb)))
        w('    +0x04 = %d' % u32(fb + 4))
        w('    +0x08 = %d' % u32(fb + 8))
        w('    +0x0C = %d  (positions, <=16)' % u32(fb + 0x0C))
        w('    +0x10 = %d  (glyph class entries)' % u32(fb + 0x10))
        w('    +0x14 = %d' % u32(fb + 0x14))
        w('    +0x18 = %d' % u32(fb + 0x18))
        w('    +0x28 = %d, +0x2C = %d' % (u32(fb + 0x28), u32(fb + 0x2C)))
        w('    +0x30 = %d' % (i32(fb + 0x30) & 0xffffffff))
        w('    +0x48 = %d, +0x4C = %d' % (u32(fb + 0x48), u32(fb + 0x4C)))
        w('    +0x5C float = %.3f' % f32(fb + 0x5C))
        m1 = u16str(fb + 0x60)
        m2 = u16str(fb + 0xA0)
        w('    mask1 (+0x60, utf16): %r' % m1)
        w('    mask2 (+0xA0, utf16): %r' % m2)
        w('    floats +0xE0: %s' % ' '.join('%.3f' % f32(fb + 0xE0 + i * 4) for i in range(16)))
        # glyph class table at +0x1D28 (first entry 8 bytes then 16-byte entries)
        gt = fb + 0x1D34
        cnt = u32(fb + 0x10)
        w('    glyph classes at +0x1D28 (0x%X), %d entries:' % (gt, cnt))
        o = gt
        c0, c1, f0 = wchar(o), wchar(o + 2), f32(o + 4)
        w('      [ 0] char=%r (u+%04X) float=%.3f  first entry 8 bytes' % (c0, ord(c0), f0))
        o += 8
        for i in range(1, cnt):
            ff, flag = u32(o), u32(o + 4)
            c0, c1 = wchar(o + 8), wchar(o + 10)
            f = f32(o + 12)
            w('      [%2d] sep=%08X flag=%d char=%r (u+%04X) float=%.3f' % (
                i, ff, flag, c0, ord(c0), f))
            o += 16
        w('    glyph template refs: +0x2134=%d, +0x2138=%d (shl 15 -> offsets)' % (
            u32(fb + 0x2134), u32(fb + 0x2138)))
        w('    float +0x2940=%.3f, +0x2948=%.3f (scaled by lib weight)' % (
            f32(fb + 0x2940), f32(fb + 0x2948)))
    # FONT section
    font_off = fmt_off + fmt_count * 10608
    w('  [FONT SECTION] at 0x%X: first bytes = %s' % (
        font_off, ' '.join('%02x' % b for b in data[font_off:font_off + 8])))
    nxt = data.find(b'\xff\xff\xff\xff', font_off)
    w('    next -1 separator at 0x%X' % nxt)
    pos = nxt + 4

out.close()
print('written /home/rafa/vocord/analysis/lprconfig_dump.txt')
