//Find frequency of array elements and delete unique elements
#include<stdio.h>
void main()
{
    int i,j,k,count,limit=0,size;
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
                {
                    count++;
                }
            }
        }
        if(count==1)
        {
            for(k=i;k<size-1;k++)
            {
                arr[k]=arr[k+1];
            }
            i--;
            size--;
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}