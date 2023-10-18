//Deletion : Delete a element at the given position
#include<stdio.h>
void main()
{
    int size,i,pos,flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the postion to delete: ");
    scanf("%d",&pos);
    for(i=0;i<size-1;i++)
    {
        if(i==pos-1)
            flag=1;
        if(flag)
            arr[i]=arr[i+1];
    }
    printf("Updated array = ");
    for(i=0;i<size-1;i++)
        printf("%d ",arr[i]);
}