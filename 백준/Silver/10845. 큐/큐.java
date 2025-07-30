import java.io.*;
import java.util.*;




public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;

	
	
    public static void main(String[] args) throws IOException {
    	int N = Integer.parseInt(br.readLine());
    	Queue<Integer> queue = new LinkedList<Integer>();
    	int last=0;
    	
    	for(int i = 0; i< N; i++) {
    		st = new StringTokenizer(br.readLine());
    		String S= st.nextToken();
    		
    		switch(S) {
    		case "push":
    			last = Integer.parseInt(st.nextToken());
    			queue.offer(last);
    			break;
    		case "pop":
    			if(queue.isEmpty())	sb.append(-1).append("\n");
    			else sb.append(queue.poll()).append("\n");
    			break;
    		case "size" :
    			sb.append(queue.size()).append("\n");
    			break;
    		case "empty" :
    			if(queue.isEmpty()) sb.append(1).append("\n");
    			else sb.append(0).append("\n");
    			break;
    		case "front" :
    			if(queue.isEmpty()) sb.append(-1).append("\n");
    			else sb.append(queue.peek()).append("\n");
    			break;
    		case "back" :
    			if(queue.isEmpty()) sb.append(-1).append("\n");
    			else sb.append(last).append("\n");
    			break;
    		}
    	}
    	System.out.println(sb);
    	}
    }
