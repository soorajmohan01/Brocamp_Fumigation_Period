//Program to delete lowest number in an array.
#include<stdio.h>
void main()
{
    int i,size,lowest,pos;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    lowest=arr[0];
    pos=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]<lowest)
        {
            lowest=arr[i];
            pos=i;
        }
    }
    for(i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Updated array = ");
    for(i=0;i<size-1;i++)
        printf("%d ",arr[i]);
}