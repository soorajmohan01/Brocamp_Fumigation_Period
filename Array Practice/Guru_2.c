//Insertion : Adds an element at the given index.
#include<stdio.h>
void main()
{
    int size,i,pos,value;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the value to be inserted: ");
    scanf("%d",&value);
    printf("Enter the position to insert %d : ",value);
    scanf("%d",&pos);
    for(i=size;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[pos-1]=value;
    printf("Updated array = ");
    for(i=0;i<=size;i++)
        printf("%d ",arr[i]);
}