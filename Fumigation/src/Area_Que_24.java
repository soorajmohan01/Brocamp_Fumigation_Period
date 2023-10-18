import java.util.Scanner;
public class Area_Que_24 {
	Scanner s=new Scanner(System.in);
	double area;
	void circle(){
		System.out.print("Enter the radius of circle: ");
		int r=s.nextInt();
		area=3.14*r*r;
	}
	void square(){
		System.out.print("Enter the length of one side: ");
		int a=s.nextInt();
		area=a*a;
	}
	void rectangle(){
		int l,b;
		System.out.print("Enter length and breadth of rectangle: ");
		l=s.nextInt();
		b=s.nextInt();
		area=l*b;
	}
	void triangle(){
		int h,b;
		System.out.print("Enter the base and height of triangle: ");
		b=s.nextInt();
		h=s.nextInt();
		area=0.5*b*h;
	}
}
