import in.cdac.*;

public class Tester {
	
	public static void main(String[] args) {
	
		Employee e1 = new WageEmployee(001, "cisco", 29,1,2000, 8,4500);
		e1.display();
		System.out.println(e1.calcSalary());
		
		Employee e2 = new SalesPerson(016, "tofu", 21,2,1996, 8, 800, 60,200);
		e2.display();
		
		System.out.println(e2.calcSalary());
		
		
	}


}
