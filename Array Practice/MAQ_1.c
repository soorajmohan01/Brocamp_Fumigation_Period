//Program to read n number of values in an array and replace all the multiples of 3 by 10
#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%3==0)
            arr[i]=10;
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}