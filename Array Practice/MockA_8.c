//Delete two numbers after the occurance of multiple of 5 and find non multiple of 5.
#include<stdio.h>
void main()
{
    int i,j,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Non multiples of 5 = ");
    for(i=0;i<size;i++)
    {
        if(arr[i]%5==0)
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
        else
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nUpdated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}