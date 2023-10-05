import java.util.*;

public class UtilityReport {
	private Map<String, Double> m;
	
	public UtilityReport() {
		m = new HashMap<>();
		}
	
	public void insertReport(String s, double p) {
		m.put(s, p);
	}
	
	public void showReport() {
		System.out.println(m);
	}

}
