//Find the largest number in an unsorted array.
#include<stdio.h>
void main()
{
    int i,size,largest=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    printf("Largest number in the array = %d\n",largest);
}