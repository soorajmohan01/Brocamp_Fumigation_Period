//Program to remove odd numbers and find the sum of existing values.
#include<stdio.h>
void main()
{
    int i,j,size,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            for(j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
        else
        {
            sum=sum+arr[i];
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\nSum = %d\n",sum);
}