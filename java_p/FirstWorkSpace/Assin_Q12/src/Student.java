
import java.util.*;

public class Student {
	private int rollNo;
	private String name;
	private double percentage;
	
	private Set<String>skillset;
	
	public int getrollNo() {
		return rollNo;
	}
	
	public String getname() {
		return name;
	}
	
	public double getpercentage() {
		return percentage;
	}
	
	public Set<String> getskillset() {
		return skillset;
	}
	
	public void setrollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	
	public void setname(String name) {
		this.name = name;
	}
	
	public void setpercentage(double percentage) {
		this.percentage = percentage;
	}
	
	public void setskillset(Set<String> skillset) {
		this.skillset = skillset;
	}
	
	public Student() {
		rollNo = 0;
		name = "tofu";
		percentage = 0.0;
		skillset = new HashSet<>();
	}
	
	public Student(int roll, String name, double per, Set<String> skill) {
		rollNo = roll;
		this.name = name;
		percentage = per;
		skillset = skill;
	}
		
	public void display()
	{
		System.out.println("_____________________________________");
		System.out.print(rollNo+" "+name+" "+percentage+" ");
		for(String s: skillset) {
			System.out.print(s + " ");
		}
		System.out.println("\n_____________________________________");
	}
}
