import java.util.Scanner;

public class Ascii {

	public static void main(String[] args) {
		char ch;
		Scanner sc = new Scanner(System.in);
		System.out.printf("Enter a charater: \n");
		ch = sc.next().charAt(0);
		System.out.println("ASCII of '"+ ch +"' is " + (int)ch);
		

	}

}
