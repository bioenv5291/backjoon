import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;
import java.io.IOException;

public class Main{
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static StringBuilder sb= new StringBuilder();
	static StringTokenizer st;
	
	static int R,C;
	static String[] A;
	static int[][] waterDist, hedgeDist;
	static int[][] dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
	
	public static void main(String[] args) throws IOException{
		st = new StringTokenizer(br.readLine());
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		waterDist = new int[R][C];
		hedgeDist = new int[R][C];
		A = new String[R];
		for(int i=0; i<R; i++) A[i] = br.readLine();
		solution();
	}
	
	static void solution() {
		int answer=0;
		bfsWater();
		bfsHedgehog();
		for(int i=0; i<R; i++) {
			for(int j=0; j<C; j++) {
				if(A[i].charAt(j)=='D') answer = hedgeDist[i][j];
			}
		}
		System.out.println((answer==-1)? "KAKTUS":answer);
	}
	static void bfsWater() {
		Queue<Integer> Q = new LinkedList<>();
		for(int i=0; i<R; i++) {
			for(int j=0; j<C; j++) {
				if(A[i].charAt(j)=='*') {
					waterDist[i][j] = 0;
					Q.add(i);
					Q.add(j);
				} else waterDist[i][j] = -1;
		}
	}
	while (!Q.isEmpty()) {
		int x = Q.poll();
		int y = Q.poll();
		
		for(int i=0; i<4; i++) {
			int nx= x+ dir[i][0];
			int ny = y+dir[i][1];
			if(nx<0||ny<0||nx>=R||ny>=C) continue;
			if(A[nx].charAt(ny)!='.') continue;
			if(waterDist[nx][ny]!=-1)continue;
			waterDist[nx][ny]=waterDist[x][y]+1;
			Q.add(nx);
			Q.add(ny);
		}
	}
}
	static void bfsHedgehog() {
		Queue<Integer> Q = new LinkedList<>();
		for(int i=0; i<R;i++) {
			for(int j=0; j<C; j++) {
				if(A[i].charAt(j)=='S') {
					hedgeDist[i][j]=0;
					Q.add(i);
					Q.add(j);
				}else hedgeDist[i][j]=-1;
				}
			}
		
	 while (!Q.isEmpty()) {
		 int x=Q.poll();
		 int y=Q.poll();
		 
		 for(int i=0; i<4; i++) {
			 int nx = x+dir[i][0];
			 int ny = y+dir[i][1];
			 if(nx<0 || ny<0|| nx>=R||ny>=C) continue;
			 if(A[nx].charAt(ny)=='X'||A[nx].charAt(ny)=='*')continue;
			 if(hedgeDist[nx][ny]!= -1) continue;
			 if(waterDist[nx][ny]!= -1 && hedgeDist[x][y]+1>=waterDist[nx][ny])continue;
			 hedgeDist[nx][ny] = hedgeDist[x][y]+1;
			 Q.add(nx);
			 Q.add(ny);
		 }
	}
	}
}