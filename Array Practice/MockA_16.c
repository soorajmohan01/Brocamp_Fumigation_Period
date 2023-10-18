//Program to find average of unique numbers.
#include<stdio.h>
void main()
{
    int i,j,size,count=0,flag;
    float sum=0,avg=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=0;j<size;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            count++;
            sum=sum+arr[i];
        }
    }
    avg=sum/count;
    printf("Average of unique numbers = %f\n",avg);
}