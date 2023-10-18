//Write a program to replace multiples of 5 with # and replace the numbers which are divisible by 7 with ‘+’
#include<stdio.h>
void main()
{
    int i,replace,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%5==0)
        {
            replace='#';
            arr[i]=replace;
        }
        else if(arr[i]%7==0)
        {
            replace='+';
            arr[i]=replace;
        }
        if(arr[i]==replace)
            printf("%c ",arr[i]);
        else
            printf("%d ",arr[i]);
    }
}