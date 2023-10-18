//Read n numbers and print the array after skipping two values next to the multiple of 5.
#include<stdio.h>
void main()
{
    int i,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Array = ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]%5==0)
            i=i+2;
    }
}