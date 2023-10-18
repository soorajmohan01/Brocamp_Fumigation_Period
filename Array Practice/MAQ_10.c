//Calculate the factorial of array elements and replace it with the number.
#include<stdio.h>
void main()
{
    int i,j,fact,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        fact=1;
        if(arr[i]==0)
            fact=1;
        else
        {
            for(j=arr[i];j>0;j--)
            {
                fact=fact*j;
            }
        }
        arr[i]=fact;
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}