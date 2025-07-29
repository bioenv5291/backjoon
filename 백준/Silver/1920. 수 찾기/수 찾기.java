import java.io.*;
import java.util.*;

public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;
	

	
	public static void main(String[] args) throws IOException{
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		int[] arr = new int[N];
		
 
		for(int i = 0; i < N; i++) {
			arr[i] = in.nextInt();
		}
		int num = in.nextInt();
		Arrays.sort(arr);
		for(int i=0;i<num;i++) {
		int idx= Arrays.binarySearch(arr,in.nextInt());
		
		if(idx<0)	System.out.println("0");
		else 	System.out.println("1");
		}
	}
	
}