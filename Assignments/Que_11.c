//Count of even numbers in an array
#include<stdio.h>
void main()
{
    int i,even=0,size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the values of array:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            even++;
    }
    printf("Number of even numbers in the given array is %d\n",even);
}