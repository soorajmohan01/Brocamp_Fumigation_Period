//Traverse : Print all the elements in the array one by one
#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Array elements are : ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}