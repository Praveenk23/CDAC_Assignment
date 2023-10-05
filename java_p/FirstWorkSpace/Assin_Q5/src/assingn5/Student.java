package assingn5;

import java.util.Scanner;

public class Student {
	private int rollNo;
	private String name;
	private Date dob;
	private static int noStudents;
	
	
	
	public Student() {
		rollNo = noStudents;
		name = "tofu";
		dob = new Date();
	}
	
	public Student(int rn, String n, int d, int m, int y) {
		rn = noStudents;
		rollNo = rn;
		name = n;
		dob = new Date(d,m,y);
		
	}
	
	public void accept()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter name: ");
		name = sc.next();
		int d, m, y;
		System.out.println("Enter dob: ");
		d = sc.nextInt();
		m = sc.nextInt();
		y = sc.nextInt();
		dob = new Date(d,m,y);
		
		noStudents++;
		rollNo = noStudents;
	}
	
	public void display()
	{
		System.out.println(rollNo);
		System.out.println(name);
		dob.display();
	}
}
