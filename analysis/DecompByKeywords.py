# Ghidra post-script (PyGhidra/Jython): decompile functions matching keywords + exports
import os
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

OUT = r'/home/rafa/vocord/analysis/out'
kw = ['region','Region','Regional','mask','Mask','plate','Plate','Library','library','LPR','lpr','Analizer','Analyzer','Init','Load','Verify','Validate','Set','Get']
fi = DecompInterface()
fi.openProgram(currentProgram)
mon = ConsoleTaskMonitor()

os.makedirs(OUT, exist_ok=True)

fm = currentProgram.getFunctionManager()
funcs = list(fm.getFunctions(True))
print('total functions: %d' % len(funcs))

def interesting(f):
    n = f.getName()
    for k in kw:
        if k in n:
            return True
    return False

sel = [f for f in funcs if interesting(f)]
print('selected: %d' % len(sel))

with open(os.path.join(OUT, 'all_functions.txt'), 'w') as idx:
    for f in funcs:
        body = f.getBody()
        idx.write('%s %s %d-%d\n' % (f.getName(), f.getEntryPoint(), body.getMinAddress().getOffset(), body.getMaxAddress().getOffset()))

with open(os.path.join(OUT, 'selected_functions.c'), 'w') as out:
    for f in sel:
        try:
            res = fi.decompileFunction(f, 120, mon)
            if res.decompileCompleted():
                out.write('//==== %s @ %s ====\n' % (f.getName(), f.getEntryPoint()))
                out.write(res.getDecompiledFunction().getC())
                out.write('\n\n')
            else:
                out.write('// FAILED %s @ %s : %s\n\n' % (f.getName(), f.getEntryPoint(), res.getErrorMessage()))
        except Exception as e:
            out.write('// EXC %s : %s\n\n' % (f.getName(), e))
print('done')
