//Insert two '1' after the occurance of a even number.
#include<stdio.h>
void main()
{
    int i,j,pos,size,arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    //int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            for(j=size+1;j>i;j--)
            {
                arr[j]=arr[j-2];
            }
            arr[i+1]=arr[i+2]=1;
            size=size+1;
            i=i+1;
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}