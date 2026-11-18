import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class DecompCallers extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String addrFile = args[0];
        String outFile = args[1];
        DecompInterface fi = new DecompInterface();
        fi.openProgram(currentProgram);

        Set<Function> funcs = new LinkedHashSet<>();
        BufferedReader br = new BufferedReader(new FileReader(addrFile));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            Address a = currentProgram.getAddressFactory().getAddress(line);
            Function f = getFunctionContaining(a);
            if (f == null) f = getFunctionAt(a);
            if (f == null) { println("no function at " + line); continue; }
            ReferenceIterator ri = currentProgram.getReferenceManager().getReferencesTo(f.getEntryPoint());
            while (ri.hasNext()) {
                Reference r = ri.next();
                Function caller = getFunctionContaining(r.getFromAddress());
                if (caller != null && !caller.isExternal()) funcs.add(caller);
            }
        }
        br.close();
        println("callers: " + funcs.size());
        PrintWriter out = new PrintWriter(new FileWriter(outFile));
        for (Function f : funcs) {
            try {
                DecompileResults res = fi.decompileFunction(f, 300, monitor);
                if (res.decompileCompleted()) {
                    out.println("//==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
                    out.println(res.getDecompiledFunction().getC());
                    out.println();
                } else out.println("// FAILED " + f.getName() + " : " + res.getErrorMessage());
            } catch (Exception e) { out.println("// EXC " + f.getName() + " : " + e); }
        }
        out.close();
        println("done");
    }
}
