//Find sum of array and if the sum is higher than 100 delete odd , if it is less than 100 delete even numbers.
#include<stdio.h>
void main()
{
    int i,j,size,flag,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        sum=sum+arr[i];
    for(i=0;i<size;i++)
    {
        flag=0;
        if(arr[i]%2==0)
            flag=1;
        if(sum>100 && flag==0)
        {
            for(j=i;j<size-1;j++)
                arr[j]=arr[j+1];
            size--;
            i--;
        }
        else if(sum<100 && flag==1)
        {
            for(j=i;j<size-1;j++)
                arr[j]=arr[j+1];
            size--;
            i--;
        }
    }
    printf("Sum = %d\n",sum);
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}