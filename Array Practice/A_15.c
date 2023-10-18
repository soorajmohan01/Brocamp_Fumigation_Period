//Sum of unique prime numbers in an array.
#include<stdio.h>
void main()
{
    int i,j,k,size,sum=0,flag,prime;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        flag=0;
        prime=0;
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                    flag=1;
            }
        }
        if(flag==0)
        {
            if(arr[i]==1)
                prime=1;
            for(k=2;k<=arr[i]/2;k++)
            {
                if(arr[i]%k==0)
                {
                    prime=1;
                    break;
                }
            }
            if(prime==0)
                sum=sum+arr[i];
        }
    }
    printf("Sum of unique prime number = %d\n",sum);
}