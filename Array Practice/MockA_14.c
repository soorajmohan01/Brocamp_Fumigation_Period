//Sort an array and count unique.
#include<stdio.h>
void main()
{
    int i,j,size,count=0,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
        }
    }
    printf("Sorted array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\nCount of unique numbers = %d\n",size-count);
}