//Program to count even and odd numbers in an array and display the sum of even numbers.
#include<stdio.h>
void main()
{
    int size,i,ecount=0,ocount=0,esum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
            ocount++;
        else
        {
            ecount++;
            esum=esum+arr[i];
        }
    }
    printf("Count of even numbers = %d\n",ecount);
    printf("Count of odd numbers = %d\n",ocount);
    printf("Sum of even numbers in the array = %d\n",esum);
}