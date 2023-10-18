//Create a menu driven java program to perform mathematical operations

import java.util.Scanner;

public class Que_17 {
	public static void main(String ar[]) {
		Scanner sc=new Scanner(System.in);
		int choice,num1,num2,result=0;
		char operator='\0';
		Que_17_2 op=new Que_17_2();
		System.out.println("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
		System.out.print("Choose an operation from menu:");
		choice=sc.nextInt();
		if(choice>0 && choice<5) 
		{
			System.out.print("Enter the first number: ");
			num1=sc.nextInt();
			System.out.print("Enter the second number: ");
			num2=sc.nextInt();
			switch(choice)
			{
				case 1: result=op.addition(num1,num2);
						operator='+';
						break;
				case 2: result=op.subtraction(num1,num2);
						operator='-';
						break;
				case 3: result=op.multiplication(num1,num2);
						operator='x';
						break;
				case 4: result=op.division(num1,num2);
						operator='/';
						break;
			}
			System.out.println("Result:");
			System.out.println(num1+" "+operator+" "+num2+" = "+result);
		}
		else
			System.out.println("\nInvalid Choice");
	}
}
