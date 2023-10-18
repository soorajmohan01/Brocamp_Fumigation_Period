//Program to replace all even numbers by 0 and odd numbers by 1.
#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int numbers[size];
    printf("Enter the numbers: ");
    for(i=0;i<size;i++)
        scanf("%d",&numbers[i]);
    for(i=0;i<size;i++)
    {
        if(numbers[i]%2==0)
            numbers[i]=0;
        else
            numbers[i]=1;
    }
    printf("The updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",numbers[i]);
}