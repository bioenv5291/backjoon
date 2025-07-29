//package practice;

//import java.util.*;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
			
		int c,k,p,total=0;
		
		//System.out.print("input number:");
		
		Scanner scanner = new Scanner(System.in);
		c = scanner.nextInt();
		k = scanner.nextInt();
		p = scanner.nextInt();
		
		for(int i=0;i<c;i++) {
			total+=(i+1)*k+p*(i+1)*(i+1);
		}
		
		
		
		System.out.printf("%d",total);

}
}
