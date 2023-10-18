//Program to delete two elements after the occurance of an even number
#include<stdio.h>
void main()
{
    int i,size,len=0,flag=0,j;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    //len=size;
    for(i=0;i<size;i++)
    {
        flag=0;
        if(arr[i]%2==0)
        {
            flag=1;
        }
        if(flag==1)
        {
            if(i==size-1)
            {
                size=size;
            }
            else if(i==size-2)
            {
                size=size-1;
            }
            else
            {
                for(j=i+1;j<size-2;j++)
                {
                    arr[j]=arr[j+2];
                }
                size=size-2;
            }
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}