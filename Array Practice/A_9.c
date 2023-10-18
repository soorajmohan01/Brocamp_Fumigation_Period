//Program to shift zeros to last without sorting.
#include<stdio.h>
void main()
{
    int i,j,size,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[j]!=0)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}