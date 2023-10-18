//Write a C Program to sort an array and print the count of '1' in array
#include<stdio.h>
void main()
{
    int size,i,j,count=0,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        if(arr[i]==1)
            count++;
    }
    printf("Sorted array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\nCount of 1 in the array = %d\n",count);
}