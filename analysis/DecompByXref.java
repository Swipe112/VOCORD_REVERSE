import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.util.*;

public class DecompByXref extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        // arg0: strings file (one pattern per line, plain substrings); arg1: out file; arg2: decompile callees 0/1; arg3: recursion depth
        String strFile = args[0];
        String outFile = args[1];
        int withCallees = args.length > 2 ? Integer.parseInt(args[2]) : 1;
        int depth = args.length > 3 ? Integer.parseInt(args[3]) : 2;

        List<String> patterns = new ArrayList<>();
        BufferedReader br = new BufferedReader(new FileReader(strFile));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (!line.isEmpty()) patterns.add(line);
        }
        br.close();

        DecompInterface fi = new DecompInterface();
        fi.openProgram(currentProgram);
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();

        // find string data addresses
        Set<Address> seeds = new LinkedHashSet<>();
        Set<Function> funcs = new LinkedHashSet<>();

        Listing listing = currentProgram.getListing();
        DataIterator dit = listing.getDefinedData(true);
        int cnt = 0;
        while (dit.hasNext()) {
            Data d = dit.next();
            Object v = d.getValue();
            String s = null;
            if (v instanceof String) s = (String) v;
            else if (d.hasStringValue()) s = d.toString();
            if (s != null) {
                for (String p : patterns) {
                    if (s.contains(p)) {
                        Address da = d.getAddress();
                        ReferenceIterator ri = currentProgram.getReferenceManager().getReferencesTo(da);
                        boolean found = false;
                        while (ri.hasNext()) {
                            Reference r = ri.next();
                            Function f = getFunctionContaining(r.getFromAddress());
                            if (f != null) { funcs.add(f); found = true; }
                        }
                        if (found) { seeds.add(da); cnt++; }
                        break;
                    }
                }
            }
        }
        println("matched strings: " + cnt + " seed functions: " + funcs.size());

        // expand with callees up to depth
        for (int d = 0; d < depth && withCallees > 0; d++) {
            List<Function> cur = new ArrayList<>(funcs);
            for (Function f : cur) {
                Set<Function> cs = getCalledFunctions(f);
                for (Function c : cs) if (c != null && !funcs.contains(c)) funcs.add(c);
            }
        }
        println("total to decompile: " + funcs.size());

        PrintWriter out = new PrintWriter(new FileWriter(outFile));
        for (Function f : funcs) {
            try {
                DecompileResults res = fi.decompileFunction(f, 180, mon);
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

    private Set<Function> getCalledFunctions(Function f) {
        Set<Function> out = new LinkedHashSet<>();
        Set<Address> body = new HashSet<>();
        AddressIterator ai = f.getBody().getAddresses(true);
        while (ai.hasNext()) body.add(ai.next());
        for (Address a : body) {
            Reference[] refs = currentProgram.getReferenceManager().getReferencesFrom(a);
            for (Reference r : refs) {
                if (r.getReferenceType().isCall()) {
                    Function c = getFunctionAt(r.getToAddress());
                    if (c == null) c = getFunctionContaining(r.getToAddress());
                    if (c != null && !c.equals(f)) out.add(c);
                }
            }
        }
        return out;
    }
}
