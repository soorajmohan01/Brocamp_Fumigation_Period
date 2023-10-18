//Write a program to find the sum of array elements except even numbers which are multiples of 4
#include<stdio.h>
void main()
{
    int i,size,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%4==0)
            continue;
        else
            sum=sum+arr[i];
    }
    printf("Sum = %d\n",sum);
}