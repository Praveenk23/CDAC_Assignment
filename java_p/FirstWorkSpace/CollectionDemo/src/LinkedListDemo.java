
import java.util.*;

public class LinkedListDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Integer> l = new LinkedList<>();
		l.add(12);
		l.add(10);
		l.add(15);
		
		System.out.println(l);       // using toStoring method
		
		for(Integer x:l)             //using for-each loop
		{
			System.out.println(x+" ");
		}
		System.out.println();
		
		Iterator<Integer> itr = l.iterator();  //using iterator
		while(itr.hasNext())
		{
			System.out.print(itr.next()+" ");
			
		}
		System.out.println();

	}
}

