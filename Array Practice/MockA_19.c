//Replace prime in an array with its double.
#include<stdio.h>
void main()
{
    int i,j,size,flag;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        flag=0;
        if(arr[i]==1)
            flag=1;
        else
        {
            for(j=2;j<=arr[i]/2;j++)
            {
                if(arr[i]%j==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            arr[i]=2*arr[i];
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}