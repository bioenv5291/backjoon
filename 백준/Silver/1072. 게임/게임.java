import java.io.*;
import java.util.*;

public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;
	

	
	public static void main(String[] args) throws IOException{
		Scanner sc = new Scanner(System.in);
		long x = sc.nextInt(), y=sc.nextInt();
		int z = (int)(y*100/x);
		int ans=-1;
		
		if(z<99) {
			ans = (int) Math.ceil((100*y-x*(z+1))/(double)(z-99));
		}
		System.out.println(ans);
	}
}