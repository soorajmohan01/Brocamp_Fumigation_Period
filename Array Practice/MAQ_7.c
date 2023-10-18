//Replace all the multiples of three by '0' and multiples of five by '1'.
#include<stdio.h>
void main()
{
    int i,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        if(arr[i]%3==0)
            arr[i]=0;
        else if(arr[i]%5==0)
            arr[i]=1;
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}