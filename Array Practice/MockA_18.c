//Delete the duplicate of a number in an array.
#include<stdio.h>
void main()
{
    int i,j,k,size;
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
            if(arr[i]==arr[j])
            {
                for(k=j;k<size-1;k++)
                    arr[k]=arr[k+1];
                size--;
                i--;
            }
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}