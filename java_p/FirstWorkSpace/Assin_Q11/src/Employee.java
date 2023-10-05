

public class  Employee {
		private int emp_id;
		private String name;
		private double salary;
		
		public int getEmp_id() {
			return emp_id;
		}
		
		public String getName() {
			return name;
		}
		
		public double getSalary() {
			return salary;
		}
		
		public void setEmp_id(int emp_id) {
			this.emp_id = emp_id;
		}
		
		public void setName(String name) {
			this.name = name;
		}
		
		public void setSalary(double salary) {
			this.salary = salary;
		}
		
		public Employee() {
			emp_id = 101;
			name = "abx";
			salary = 100.5;
		}
		
		public Employee(int id, String n, double s) {
			emp_id = id;
			name = n;
			salary = s;
		}
		
		public void display()
		{
			System.out.println(emp_id+" "+name+" "+salary);
		}

}
