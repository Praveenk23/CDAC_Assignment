class LaptopClass
{
    private int srno;
    private String make;
    private double cost;

    public LaptopClass() {
    }

    public int getSrno() {
        return srno;
    }

    public void setSrno(int srno) {
        this.srno = srno;
    }

    public String getMake() {
        return make;
    }

    public void setMake(String make) {
        this.make = make;
    }

    public double getCost() {
        return cost;
    }

    public void setCost(double cost) {
        this.cost = cost;
    }

    public LaptopClass(int srno, String make, double cost) {
        this.srno = srno;
        this.make = make;
        this.cost = cost;
    }

    @Override
    public String toString() {
        return srno+" "+make+" "+cost;
    }

    public void display()
    {
        System.out.println(srno+" "+make+" "+cost);
    }
}

    public class Laptop{
        public static void main(String[] args) {
            LaptopClass l1= new LaptopClass(101, "dell", 45000);
            System.out.println(l1);
        }
    }
