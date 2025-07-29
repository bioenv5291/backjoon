//package practice;

//import java.util.*;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
			
		int input;
		
		//System.out.print("input number:");
		
		Scanner scanner = new Scanner(System.in);
		String tmp = scanner.nextLine();
		input = Integer.parseInt(tmp);
		
		if(input==0) {
			System.out.println("YONSEI");
		}
		if(input==1)
			System.out.println("Leading the Way to the Future");
			//System.out.printf("input is %d.",input);
			
	}

}
