
interface Polygon
{
	public int calcArea();
	public int calcPeri();
}

class Rectangle implements Polygon
{
	int len, brd;
	public Rectangle(int l, int b)
	{
		len = l;
		brd = b;
	}
	public int calcArea()
	{
		return len*brd;
	}
	public int calcPeri()
	{
		return 2*(len+brd);
	}
	
}
public class Tester {
	
	public static void main(String[] args) {
		Polygon p = new Rectangle(3,4);
		System.out.println(p.calcArea());
		System.out.println(p.calcPeri());
	}

}
