package practice;

class A{
	A(){
		System.out.println("Constructor A");
	}
	A(int a){
		System.out.println("Constructor A with parameter");
	}
}

class B extends A{
	B(){
		super(5);
		System.out.println("Constructor B");
	}
	B(int a){
		super();
		System.out.println("Constructor B with parameter");
	}
}

public class SuperDemo {
	public static void main(String arg[]) {
		B objB=new B();
	}
}
