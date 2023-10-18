package practice;

public class Decapsule {
	public static void main(String arg[]){
		Encapsule en=new Encapsule();
		en.setName("Tobby");
		System.out.println(en.getName());
		en.UpdateAge();
		System.out.println(en.AgeOld());
		en.UpdateAge();
		System.out.println(en.AgeOld());
		en.Time();
		en.Travel();
	}
	public void Travel(){
		System.out.println("This is Main class");
	}
}
