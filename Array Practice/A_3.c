//Program to print unique elements in an array
#include<stdio.h>
void main()
{
    int i,j,size,count;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Unique numbers in the array: ");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                    count++;
            }
        }
        if(count==0)
            printf("%d ",arr[i]);
    }
}