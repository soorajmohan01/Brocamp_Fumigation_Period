package practice;

public class Test3 extends Arithmetic implements Inter1{
	public static void main(String arg[]) {
		int div;
		int a=10,b=0;
		try {
			System.out.println("It came here");
			div=a/b;
			System.out.println(div);
			System.out.println("It was also here");
		}
		catch(ArithmeticException ae) {
			System.out.println("You can't divide a number with zero");
		}
		finally {
			System.out.println("Execution completed");
		}
	}
}
