import java.io.*;
import java.util.*;




public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;
	
	
    public static void main(String[] args) throws IOException {
    	int n = Integer.parseInt(br.readLine());
    	
    	Queue<Integer> maxHeap = new PriorityQueue<>((o1,o2)->o2-o1);
    	Queue<Integer> minHeap = new PriorityQueue<>((o1,o2)->o1-o2);
    	
    	for(int i=0; i<n; i++) {
    		int num = Integer.parseInt(br.readLine());
    		if(maxHeap.size()==minHeap.size())	maxHeap.add(num);
    		else minHeap.add(num);
    		
    		if(!maxHeap.isEmpty()&&!minHeap.isEmpty()) {
    			if(maxHeap.peek()>minHeap.peek()) {
    				int tmp = maxHeap.poll();
    				maxHeap.offer(minHeap.poll());
    				minHeap.offer(tmp);
    			}
    		}
    		sb.append(maxHeap.peek()+"\n");
    	}
    	System.out.println(sb.toString());
    			
    	}
    }
