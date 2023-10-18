//Write a program to find the most repeated element in an array.
#include<stdio.h>
void main()
{
    int i,j,count,mostRep=0,pos=0,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=0;j<size;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>mostRep)
        {
            mostRep=count;
            pos=i;
        }
    }
    printf("Most repeated element in the array = %d\n",arr[pos]);
}