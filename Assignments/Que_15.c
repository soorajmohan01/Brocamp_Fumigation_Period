//Read and display an array using multiple functions
#include<stdio.h>
int i;
void getArray(int*,int);
void displayArray(int*,int);
void main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    getArray(arr,size);
    displayArray(arr,size);
}
void getArray(int *array,int s)
{
    printf("Enter the array elements:\n");
    for(i=0;i<s;i++)
        scanf("%d",&array[i]);
}
void displayArray(int *arr,int size)
{
    printf("Array values: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}