//Program to count the number of prime numbers in an array
#include<stdio.h>
void main()
{
    int i,j,count=0,size,flag;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: \n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            count++;
    }
    printf("Count of prime numbers in the array = %d\n",count);
}