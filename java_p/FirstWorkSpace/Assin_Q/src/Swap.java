import java.util.Scanner;

public class Swap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a,b,temp;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter two value: ");
		a = sc.nextInt();
		b = sc.nextInt();
		System.out.println("Before swap: " + a + " " + b);
//		a = a+b;
//		b = a-b;
//		a = a-b;
		temp = a;
		a = b;
		b = a;
		System.out.println("After swap: " + a + " " + b);
		

	}

}
