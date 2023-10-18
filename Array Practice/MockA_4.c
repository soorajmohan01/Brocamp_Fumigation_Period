//Find average of negative numbers and move to the beginning without sorting.
#include<stdio.h>
void main()
{
    int i,j,count=0,temp,pos,loc=0,size;
    float avg=0,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            count++;
            sum=sum+arr[i];
        }
    }
    avg=sum/count;
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            temp=arr[i];
            pos=i;
            for(j=pos;j>loc;j--)
                arr[j]=arr[j-1];
            arr[loc]=temp;
            loc++;
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\nAverage of negative numbers = %f\n",avg);

}