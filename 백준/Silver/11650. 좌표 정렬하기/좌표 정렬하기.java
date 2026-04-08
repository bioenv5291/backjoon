import java.util.*;
import java.io.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    static class Point{
        int x;
        int y;

        Point(int x, int y){
            this.x =x;
            this.y=y;
        }
        @Override
        public String toString(){

            return x+ " "+y;
        }
    }

    public static void main(String[] args) throws Exception {

        //TIP Press <shortcut actionId="ShowIntentionActions"/> with your caret at the highlighted text
        // to see how IntelliJ IDEA suggests fixing it.
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());
        Point[] arr = new Point[num];
        //Integer.compare(4,2);
        for (int i = 0; i < num; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            arr[i] = new Point(x,y);
        }
        Arrays.sort(arr,(Point a,Point b)->{
            if(a.x == b.x){
                return Integer.compare(a.y,b.y);
            }
            return Integer.compare(a.x,b.x);
        });

        for(int i=0; i<num; i++)
            System.out.println(arr[i].toString());
    }
    }
