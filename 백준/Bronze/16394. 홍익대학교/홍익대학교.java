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
		
		System.out.printf("%d",input-1946);

}
}
