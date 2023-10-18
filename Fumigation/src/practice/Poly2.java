package practice;

public class Poly2 extends Poly1{
	void display() {
		System.out.println("Method in child class");
		super.display();
	}
	void parent() {
		super.display();
	}
//	int sum(int a,int b,int c) {
//		System.out.println("This is the child class method");
//		int sum =a+b+c;
//		return sum;
//	}
//	int sum(int a,int b,int c,int d) {
//		int sum=a+b;
//		return sum;
//	}
//	int sum(int a,int b,int c) {
//		int sum=a+b+c;
//		return sum;
//	}
//	float sum(float a,float b) {
//		float sum=a+b;
//		return sum;
//	}
//	float sum(int a,int b) {
//		float sum=(a+b)*0.5f;
//		return sum;
//	}
	public static void main(String arg[]) {
		Poly2 p2=new Poly2();
		p2.display();
		p2.parent();
		//System.out.println(p2.sum(3, 5));
	}
}
