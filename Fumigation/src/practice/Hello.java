package practice;

public class Hello extends Second{
	static Hello obj3=new Hello();
	public static void main(String arg[]) {
		Second sec=new Second();
		Hello obj2=new Hello();
		//sec.display();
		obj3.Hai();
		//show();
		obj2.Hello();
	}
	void Hello() {
		System.out.println("HELLO.....");
		Hello obj=new Hello();
		obj.Hai();
	}
	void Hai() {
		System.out.println("HAII......");
	}
	Hello(){
		System.out.println("This is the constructor");
	}
}