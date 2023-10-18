//Program to find prime numbers and replace it with '*'.
#include<stdio.h>
void main()
{
    int i,j,size,star,flag;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        flag=0;
        if(arr[i]==1)
            flag=1;
        else
        {
            for(j=2;j<=arr[i]/2;j++)
            {
                if(arr[i]%j==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            arr[i]=42;
            printf("%c ",arr[i]);
        }
        else
            printf("%d ",arr[i]);
    }
}