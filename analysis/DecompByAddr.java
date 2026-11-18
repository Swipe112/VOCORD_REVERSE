import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.util.*;

public class DecompByAddr extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String addrFile = args[0];
        String outFile = args[1];
        int depth = args.length > 2 ? Integer.parseInt(args[2]) : 1;

        DecompInterface fi = new DecompInterface();
        fi.openProgram(currentProgram);
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();

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
            funcs.add(f);
        }
        br.close();
        for (int d = 0; d < depth; d++) {
            List<Function> cur = new ArrayList<>(funcs);
            for (Function f : cur) {
                AddressIterator ai = f.getBody().getAddresses(true);
                while (ai.hasNext()) {
                    for (Reference r : currentProgram.getReferenceManager().getReferencesFrom(ai.next())) {
                        if (r.getReferenceType().isCall()) {
                            Function c = getFunctionAt(r.getToAddress());
                            if (c == null) c = getFunctionContaining(r.getToAddress());
                            if (c != null && !c.equals(f) && !c.isExternal()) funcs.add(c);
                        }
                    }
                }
            }
        }
        println("to decompile: " + funcs.size());
        PrintWriter out = new PrintWriter(new FileWriter(outFile));
        for (Function f : funcs) {
            try {
                DecompileResults res = fi.decompileFunction(f, 300, mon);
                if (res.decompileCompleted()) {
                    out.println("//==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
                    out.println(res.getDecompiledFunction().getC());
                    out.println();
                } else {
                    out.println("// FAILED " + f.getName() + " @ " + f.getEntryPoint() + " : " + res.getErrorMessage());
                }
            } catch (Exception e) {
                out.println("// EXC " + f.getName() + " : " + e);
            }
        }
        out.close();
        println("done");
    }
}
