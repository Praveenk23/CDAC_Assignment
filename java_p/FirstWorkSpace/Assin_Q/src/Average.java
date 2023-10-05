import java.util.Scanner;

public class Average {

	public static void main(String[] args) {
		float a,b,c,d,e,sum,avg;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter five value: ");
		a=sc.nextFloat();
		b=sc.nextFloat();
		c=sc.nextFloat();
		d=sc.nextFloat();
		e=sc.nextFloat();
		sum=a+b+c+d+e;
		System.out.println("Average = " + (sum/5.0f));

	}

}
