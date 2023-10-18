//Remove odd number from the array and find sum of existing values in the array.
#include<stdio.h>
void main()
{
    int i,j,size,sum=0,flag=0,k=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            k++;
            for(j=i+1;j<size;j++)
                arr[i]=arr[j];
        }
        else
            sum=sum+arr[i];
    }
    printf("Array = ");
    for(i=0;i<size-k;i++)
        printf("%d ",arr[i]);
    printf("\nSum of even numbers = %d\n",sum);
}