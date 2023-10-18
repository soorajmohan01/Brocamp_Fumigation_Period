//Calculate sum of all the elements in an array and delete all the prime numbers if sum 
//greater than 100 or delete non prime numbers if sum less than 100.
#include <stdio.h>
int main()
{
    int size,flag,i,j,sum;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        sum=sum+arr[i];
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
        if(flag==0 && sum>100)
        {
            for(j=i;j<size;j++)
            {
               arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
        if(flag==1 && sum<100)
        {
            for(j=i;j<size;j++)
            {
               arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}