//Write a program to replace all odd numbers in an array with & and print the array in reverse order.
#include<stdio.h>
void main()
{
    int i,size,ascii='&';
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
            arr[i]=ascii;
    }
    for(i=size-1;i>=0;i--)
    {
        if(arr[i]==ascii)
            printf("%c ",arr[i]);
        else
            printf("%d ",arr[i]);
    }
}