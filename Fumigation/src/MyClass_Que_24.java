//Menu driven java pr0gram to find area

import java.util.Scanner;
public class MyClass_Que_24 extends Area_Que_24 {
	public static void main(String arg[]) {
		Scanner sc=new Scanner(System.in);
		MyClass_Que_24 obj=new MyClass_Que_24();
		//float area;
		System.out.println("1.Circle\n2.Square\n3.Rectangle\n4.Triangle");
		System.out.print("Choose from the options: ");
		int choice=sc.nextInt();
		if(choice>0 && choice < 5) 
		{
			switch(choice)
			{
				case 1: obj.circle();
						break;
				case 2: obj.square();
						break;
				case 3: obj.rectangle();
						break;
				case 4: obj.triangle();
						break;
			}
			System.out.println("Area = "+obj.area);
		}
		else
			System.out.println("Invalid Choice!!!");
	}
}
