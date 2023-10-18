package practice;

public class Nested {
	public static void main(String arg[]) {
		System.out.println("Abstract class");
	}
	void display() {
		System.out.println("This is the outer class");
	}
	//abstract void show();
	class Nest2{
		void display2() {
			System.out.println("This is the class inside a method");
		}
	}
}

