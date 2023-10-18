//Program to check whether the given number is prime number or not

import java.util.Scanner;
public class Que_16 {
	public static void main(String arg[]) {
		Scanner s=new Scanner(System.in);
		System.out.println("Enter a number: ");
		int num=s.nextInt();
		int flag=0;
		for(int i=2;i<=num/2;i++) 
		{
			if(num%i==0)
				flag=1;
		}
		if(flag==0)
			System.out.println("Entered number is a prime number");
		else
			System.out.println("Entered number is not a prime number");
	}
}
