import java.io.*;
import java.util.*;

public class Main {
    static int[] tree;
    static int MAX = 1000000;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = Integer.parseInt(br.readLine());
        int size = 1;
        while (size < MAX) size *= 2;
        tree = new int[size * 2];

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int A = Integer.parseInt(st.nextToken());
            if (A == 1) {
                int B = Integer.parseInt(st.nextToken());
                int result = query(1, 1, MAX, B);
                bw.write(result + "\n");
                update(1, 1, MAX, result, -1);
            } else {    
                int B = Integer.parseInt(st.nextToken());
                int C = Integer.parseInt(st.nextToken());
                update(1, 1, MAX, B, C);
            }
        }
        
        bw.flush();
        bw.close();
        br.close();
    }

    static int query(int node, int start, int end, int k) {  
        if (start == end) return start;
        int mid = (start + end) / 2;
        if (k <= tree[node*2]) return query(node*2, start, mid, k);
        else return query(node*2+1, mid+1, end, k - tree[node*2]);
    }

    static void update(int node, int start, int end, int index, int diff) {
        if (index < start || index > end) return;
        tree[node] += diff;
        if (start != end) {
            int mid = (start + end) / 2;
            update(node*2, start, mid, index, diff);
            update(node*2+1, mid+1, end, index, diff);
        }
    }
}