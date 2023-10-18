//Program to print repeating elements but don't print elements having third occurance.
#include<stdio.h>
void main()
{
    int i,j,size,count;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                    count++;
            }
        }
        if(count!=3 && count>1)
            printf("%d ",arr[i]);
    }
}