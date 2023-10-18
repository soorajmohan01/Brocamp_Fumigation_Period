//Multiply adjacent elements in an array and store it into another
#include<stdio.h>
void main()
{
    int i,size;
    printf("Enter the array limit: ");
    scanf("%d",&size);
    int arr[size],result[size-1];
    printf("Enter the values of array: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size-1;i++)
    {
        result[i]=arr[i]*arr[i+1];
    }
    printf("Output: ");
    for(i=0;i<size-1;i++)
        printf("%d ",result[i]);
}