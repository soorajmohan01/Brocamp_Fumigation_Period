//Reverse an array and delete multiple of 3.
#include<stdio.h>
void main()
{
    int i,j,temp,size,len;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    len=size-1;
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[len];
        arr[len]=temp;
        len--;
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%3==0)
        {
            for(j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}