import java.util.*;

public class Assin_11 {

	public static void main(String[] args) {
		List<Employee> list = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		while(true) {
			System.out.println("1. Add Employee");
			System.out.println("2. Update Employee");
			System.out.println("3. Display All Employee");
			System.out.println("4. Exit");
			System.out.println("Enter your choice");
			
			switch(sc.nextInt())
			{
			case 1:
				System.out.println("Enter employee deatails(id, name, salary): ");
				list.add(new Employee(sc.nextInt(), sc.next(), sc.nextDouble()));
				break;
			case 2:			
				System.out.println("Enter id of employee to updated(id): ");
				int id = sc.nextInt();
				for(Employee e:list)
				{
					if(id == e.getEmp_id())
					{				
						System.out.println("Enter updated name and salary(name, salary): ");
						e.setName(sc.next());
						e.setSalary(sc.nextDouble());
					}
				}
				break;
			case 3:
				for(Employee e:list)
				{
					e.display();
				}
					break;
			case 4:
				System.exit(0);
			}
		}
		
		

	}

}
