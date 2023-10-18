package practice;

public class Construct {
	static int sum;
	public static void main(String arg[]) {
		Construct obj=new Construct(3,5);
		System.out.println("Sum = "+sum);
		Construct obj2=new Construct(5,5);
		Construct obj3=new Construct();
		System.out.println("Sum = "+sum);
	}
	Construct(int a,int b){
		sum=a+b;
	}
	Construct(){
		
	}
}
