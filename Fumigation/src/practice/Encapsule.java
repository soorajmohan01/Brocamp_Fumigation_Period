package practice;

public class Encapsule {
	private String name="";
	private String color;
	private String breed;
	private float age;
	
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name=name;
	}
	
	
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color=color;
	}
	
	
	public String getBreed() {
		return breed;
	}
	public void setBreed(String breed) {
		this.breed=breed;
	}
	
	
	float AgeOld() {
		return age;
	}
	public void UpdateAge() {
		float a=10.5f;
		age=age+a;
	}
	
	
	
	final void Travel() {
		//System.out.println(a);
		System.out.println("Requires a half day travel");
	}
	
	public void Time() {
		System.out.println("Visiters allowed only in office time.");
	}
	
	public void ageLimit() {
		System.out.println("Comes under the age limit");
	}
}
