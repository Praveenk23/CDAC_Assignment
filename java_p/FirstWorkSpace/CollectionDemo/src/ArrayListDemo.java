
import java.util.*;

public class ArrayListDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Integer> a = new ArrayList<>();
		a.add(12);
		a.add(10);
		a.add(15);
		
		System.out.println(a);       // using toStoring method
		
		for(Integer x:a)             //using for-each loop
		{
			System.out.println(x+" ");
		}
		System.out.println();
		
		Iterator<Integer> itr = a.iterator();  //using iterator
		while(itr.hasNext())
		{
			System.out.print(itr.next()+" ");
			
		}
		System.out.println();

	}
}

