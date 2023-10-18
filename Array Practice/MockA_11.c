//Program to delete multiples of five
#include<stdio.h>
void main()
{
    int i,j,size;
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
            for(j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}