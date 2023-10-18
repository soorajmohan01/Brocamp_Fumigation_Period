//Program to find two array elements whos sum is closest to zero
#include<stdio.h>
void main()
{
    int i,j,size,small=1000,num1,num2,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sum=arr[i]+arr[j];
            if(sum<small)
            {
                small=sum;
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("The numbers whose sum is closest to zero = %d , %d\n",num1,num2);    
}