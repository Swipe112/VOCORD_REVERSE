import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;

public class DecompByOffset extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outFile = args[0];
        long off1 = Long.parseLong(args[1].replace("0x",""), 16);
        long off2 = args.length > 2 ? Long.parseLong(args[2].replace("0x",""), 16) : -1;
        DecompInterface fi = new DecompInterface();
        fi.openProgram(currentProgram);
        Set<Function> funcs = new LinkedHashSet<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            try {
                for (int o = 0; o < ins.getNumOperands(); o++) {
                    Object[] objs = ins.getOpObjects(o);
                    for (Object obj : objs) {
                        if (obj instanceof Scalar) {
                            long v = ((Scalar) obj).getUnsignedValue();
                            if (v == off1 || v == off2) {
                                Function f = getFunctionContaining(ins.getAddress());
                                if (f != null) funcs.add(f);
                            }
                        }
                    }
                }
            } catch (Exception e) {}
        }
        println("functions with offsets: " + funcs.size());
        PrintWriter out = new PrintWriter(new FileWriter(outFile));
        for (Function f : funcs) {
            DecompileResults res = fi.decompileFunction(f, 300, monitor);
            if (res.decompileCompleted()) {
                out.println("//==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
                out.println(res.getDecompiledFunction().getC());
                out.println();
            } else out.println("// FAILED " + f.getName() + " : " + res.getErrorMessage());
        }
        out.close();
        println("done");
    }
}
