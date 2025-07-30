import java.io.*;
import java.util.*;




public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;
	
	
    public static void main(String[] args) throws IOException {
    	PriorityQueue<Integer> ans = new PriorityQueue<>(Collections.reverseOrder());
    	int N = Integer.parseInt(br.readLine());
    	
    	for(int i=0; i<N; i++) {
    		int x = Integer.parseInt(br.readLine());
    		if(x==0)	{
    			if(x==0)	{
    				if(ans.isEmpty())	bw.write("0\n");
        			else	bw.write(ans.poll()+"\n");
    			}
    			
    		}
    		else ans.add(x);
    	}
    	
    	br.close();
    	bw.close();
    			
    	}
    }
