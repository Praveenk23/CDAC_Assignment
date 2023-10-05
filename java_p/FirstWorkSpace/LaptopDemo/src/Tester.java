import in.cdac.gadgets.Laptop;
import static in.cdac.gadgets.Laptop.showCnt;


public class Tester {

	public static void main(String[] args) {
		Laptop l1= new Laptop();
		Laptop l2=new Laptop(10, "Fujitsu", 99999);
		Laptop l3= new Laptop(11, "hp", 42345);
		Laptop l4= new Laptop(12, "dell", 56000);
		showCnt();
		l1.display();
		l2.display();
		l3.display();
		

	}

}
