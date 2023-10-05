import java.util.Scanner;

public class Salary {

	public static void main(String[] args) {
		float BS, HRA, DA, PF, GS, Net_S;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Basic salary amount: ");
		BS = sc.nextFloat();
		HRA = (float) (BS * 0.12);
		DA = (float) (BS * 0.30);
		PF = (float) (BS * 0.125);
		GS = (BS + HRA + DA);
		Net_S = (GS - PF);
		System.out.printf("Basic salary is %.2f\n", BS);
		System.out.printf("HRA %.2f\n", HRA);
		System.out.printf("DA %.2f\n", DA);
		System.out.printf("PF %.2f\n", PF);
		System.out.printf("Gross salary is %.2f\n", GS);
		System.out.printf("Net salary is %.2f\n", Net_S);

	}

}
