import java.util.*;

public class VectorDemo {

	public static void main(String[] args) {
		
		List<Integer> v = new Vector<>();
		v.add(12);
		v.add(10);
		v.add(15);
		
		System.out.println(v);       // using toStoring method
		
		for(Integer x:v)             //using for-each loop
		{
			System.out.println(x+" ");
		}
		System.out.println();
		
		Iterator<Integer> itr = v.iterator();  //using iterator
		while(itr.hasNext())
		{
			System.out.print(itr.next()+" ");
			
		}
		System.out.println();

	}

}
