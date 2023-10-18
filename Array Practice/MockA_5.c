//Skip two numbers after occurance of prime number
#include<stdio.h>
void main()
{
    int i,j,size,flag;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Array = ");
    for(i=0;i<size;i++)
    {
        flag=0;
        printf("%d ",arr[i]);
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            i=i+2;
        }
    }
}