import struct, sys

def rva_to_off(sec_table, rva):
    for nm, va, vsz, rsz, ro in sec_table:
        if va <= rva < va + max(vsz, rsz):
            return ro + (rva - va)
    return None

for name in ['TrafficAnalizerDll.dll','VTTrafficAnalyzer.dll']:
    data = open('/home/rafa/vocord/'+name,'rb').read()
    print('='*60)
    print(name, len(data))
    pe_off = struct.unpack_from('<I', data, 0x3c)[0]
    sig = data[pe_off:pe_off+4]
    machine, nsec, _, _, opt_size = struct.unpack_from('<HHIII', data, pe_off+4)
    magic = struct.unpack_from('<H', data, pe_off+24)[0]
    print(f' sig={sig} machine={machine:#x} ({\"i386\" if machine==0x14c else \"?\"}) nsec={nsec} optmagic={magic:#x}')
    coff = pe_off+24
    dd_count = struct.unpack_from('<I', data, coff + (92 if magic==0x10b else 108))[0]
    dd_off = coff + (96 if magic==0x10b else 112)
    names = ['Export','Import','Resource','Exception','Security','Basereloc','Debug','Arch','GlobalPtr','TLS','LoadConfig','BoundImport','IAT','DelayImport','CLR','Reserved']
    for i in range(min(dd_count,16)):
        rva, sz = struct.unpack_from('<II', data, dd_off+i*8)
        if rva or sz:
            print(f'   {names[i]:12s} rva={rva:#010x} size={sz:#010x}')
    sec_off = coff + opt_size
    sec_table = []
    print(' sections:')
    for i in range(nsec):
        s = data[sec_off+i*40:sec_off+i*40+40]
        nm = s[:8].rstrip(b'\x00').decode('ascii','replace')
        vsz, va, rsz, ro = struct.unpack_from('<IIII', s, 8)
        chars = struct.unpack_from('<I', s, 36)[0]
        sec_table.append((nm, va, vsz, rsz, ro))
        print(f'   {nm:9s} va={va:#010x} vsz={vsz:#010x} raw={ro:#010x} rawsz={rsz:#010x} chars={chars:#010x}')
