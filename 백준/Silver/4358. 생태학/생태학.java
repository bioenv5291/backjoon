import java.io.*;
import java.util.*;




public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;
	
	
    public static void main(String[] args) throws IOException {
    	
    	String tree;
    	TreeMap<String, Integer> map = new TreeMap<>();
    	double cnt=0;
    	while((tree=br.readLine())!=null) {
    		map.put(tree, map.getOrDefault(tree, 0)+1);
    		cnt++;
    	}
 
        for(var t: map.entrySet()) {
    		sb.append(t.getKey()).append(" ").append(String.format("%.4f", t.getValue()/cnt * 100)).append("\n");
    	}
    	System.out.println(sb);
    	br.close();
    	bw.flush();
    	}
    }
