import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.util.*;

public class DecompByKeywords extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String kwFile = args.length > 0 ? args[0] : "/home/rafa/vocord/analysis/keywords.txt";
        List<String> kw = new ArrayList<>();
        BufferedReader br = new BufferedReader(new FileReader(kwFile));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (!line.isEmpty()) kw.add(line);
        }
        br.close();

        DecompInterface fi = new DecompInterface();
        fi.openProgram(currentProgram);
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();

        File outDir = new File("/home/rafa/vocord/analysis/out");
        outDir.mkdirs();

        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> funcs = new ArrayList<>();
        FunctionIterator it = fm.getFunctions(true);
        while (it.hasNext()) funcs.add(it.next());
        println("total functions: " + funcs.size());

        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "all_functions_" + currentProgram.getName() + ".txt")));
        List<Function> sel = new ArrayList<>();
        for (Function f : funcs) {
            body(f, idx);
            String n = f.getName();
            for (String k : kw) {
                if (n.contains(k)) { sel.add(f); break; }
            }
        }
        idx.close();
        println("selected: " + sel.size());

        PrintWriter out = new PrintWriter(new FileWriter(new File(outDir, "selected_functions_" + currentProgram.getName() + ".c")));
        for (Function f : sel) {
            try {
                DecompileResults res = fi.decompileFunction(f, 120, mon);
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
        println("done, selected=" + sel.size());
    }

    private void body(Function f, PrintWriter idx) {
        try {
            long min = f.getBody().getMinAddress().getOffset();
            long max = f.getBody().getMaxAddress().getOffset();
            idx.println(f.getName() + " " + f.getEntryPoint() + " " + min + "-" + max);
        } catch (Exception e) {
            idx.println(f.getName() + " " + f.getEntryPoint() + " ?-?");
        }
    }
}
