import java.util.*;

public class LinkedMapDemo {

	public static void main(String[] args) {

		Map<Integer, String> map = new LinkedHashMap<>();
		map.put(101, "abc");
		map.put(106, "wer");
		map.put(107, "gdf");
		map.put(109, "hgd");
		map.put(111, "hljk");
		map.put(120, "ytg");
	
		System.out.println(map);
		
	}

}
