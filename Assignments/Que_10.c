//Array swapping
#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter the size of arrays: ");
    scanf("%d",&size);
    int arr1[size],arr2[size],temp;
    printf("Enter the values of Array 1: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the values of Array 2: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr2[i]);
    for(i=0;i<size;i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("Arrays after swapping:\n");
    printf("Array 1 = ");
    for(i=0;i<size;i++)
        printf("%d ",arr1[i]);
    printf("\nArray 2 = ");
    for(i=0;i<size;i++)
        printf("%d ",arr2[i]);
}