import java.util.*;

public class Main {

	public static void main(String[] args) {
		UtilityList listOfStudents = new UtilityList();
		UtilityReport up = new UtilityReport();
		Scanner sc = new Scanner(System.in);
		
		int no;
		System.out.println("Enter no of students: ");
		no = sc.nextInt();
		while(no > 0) {
			Student s1 = new Student();
			System.out.print("Enter roll no: ");
			s1.setrollNo(sc.nextInt());
			System.out.println("Enter name: ");
			s1.setname(sc.next());
			System.out.print("Enter percentage: ");
			s1.setpercentage(sc.nextDouble());
			up.insertReport(s1.getname(), s1.getpercentage());
			
			Set<String> sk = new HashSet<>();
			int n;
			System.out.println("Enter number of skills: ");
			n = sc.nextInt();
			String ski;
			while(n>0) {
				ski = sc.next();
				sk.add(ski);
				n = n -1;
				}
			s1.setskillset(sk);
			listOfStudents.createList(s1);
			no = no -1;
		}
		
		listOfStudents.printList();
		
		up.showReport();
		

		
	}

}


