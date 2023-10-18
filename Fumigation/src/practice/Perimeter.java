package practice;
import java.util.Scanner;

public class Perimeter implements Addition,Multiplication{
	public static void main(String ar[]) {
		Scanner sc=new Scanner(System.in);
		Perimeter p=new Perimeter();
		System.out.println("Enter the length and breadth of rectangle: ");
		int l=sc.nextInt();
		int b=sc.nextInt();
		int sum=p.add(l,b);
		int peri=p.mul(sum,2);
		System.out.println("Perimeter of the rectangle = "+peri);
	}
	public int add(int a,int b) {
		int total=a+b;
		return total;
	}
	public int mul(int a,int b) {
		int product=a*b;
		return product;
	}
}
