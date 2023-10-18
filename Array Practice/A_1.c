//Program to count frequency of each element.
#include<stdio.h>
void main()
{
    int i,j,size,count;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size],countArr[size];
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
            countArr[i]=count;
        }
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]!=-1)
        {
            printf("The frequency count of %d is %d\n",arr[i],countArr[i]);
        }
    }
}