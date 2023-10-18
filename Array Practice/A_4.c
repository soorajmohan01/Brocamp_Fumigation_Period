//Program to display largest and second largest numbers in an array
#include<stdio.h>
void main()
{
    int i,largest=0,secLarge=0,size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(largest<arr[i])
        {
            secLarge=largest;
            largest=arr[i+1];
        }
        else if(arr[i]!=largest && arr[i]>secLarge)
            secLarge=arr[i];
    }
    printf("Largest number in the array = %d\n",largest);
    printf("Second Largest number in the array = %d\n",secLarge);
}