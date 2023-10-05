import java.util.*;

public class UtilityList {
	private List<Student> list;
	
	public UtilityList() {
		list = new ArrayList<Student>();
	}

	public void createList(Student s) {
		list.add(s);
	}
	
	public List<Student> getList() {
		return list;
	}
	
	public void printList() {
		for(Student s: list) {
			s.display();
		}
	}
}
