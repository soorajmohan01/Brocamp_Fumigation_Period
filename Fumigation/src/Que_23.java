//Reading and displaying an array using multiple functions
import java.util.Scanner;
public class Que_23 {
	static Scanner sc=new Scanner(System.in);
	int i,j;
	public static void main(String ar[]) {
		Que_23 fun=new Que_23();
		System.out.print("Enter size of the array: ");
		int size=sc.nextInt();
		int[][] array=new int[size][size];
		array=fun.getArray(array,size);
		fun.displayArray(array,size);
	}
	int[][] getArray(int arr[][],int s) {
		System.out.println("Enter the array values: ");
		for(i=0;i<s;i++)
		{
			for(j=0;j<s;j++)
				arr[i][j]=sc.nextInt();
		}
		return arr;
	}
	void displayArray(int array[][],int size) {
		System.out.println("Array elements are:");
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
				System.out.print(array[i][j]+" ");
			System.out.println();
		}
	}
}
