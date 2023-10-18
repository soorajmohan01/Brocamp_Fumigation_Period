//Reversing : Print array in reverse order.
#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Array in reverse order = ");
    for(i=size-1;i>=0;i--)
        printf("%d ",arr[i]);
}