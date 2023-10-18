//Sorting an array in descending order
#include<stdio.h>
void main()
{
    int size,i,j,temp;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the values of array: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}