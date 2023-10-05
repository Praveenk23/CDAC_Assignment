/* A pubic class has to be written in a file having same name as that of class name.
   Primitive data - int, char, float, double, long, short, byte, boolean 
   */


import java.util.Scanner;

public class Tester
{
    public static void main(String [] args)
    {
        int a,b;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Sum = " + (a+b));
    }

}
