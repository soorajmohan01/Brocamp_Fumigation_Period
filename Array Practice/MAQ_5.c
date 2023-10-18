//Program to find array elements that repeat two times.
#include<stdio.h>
void main()
{
    int i,j,size,count;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Numbers that repeats two times= ");
    for(i=0;i<size;i++)
    {
        count=1;
        //if(arr[i]!=-1)
        //{
            for(j=0;j<size;j++)
            {
                if(i!=j)
                {
                    if(arr[i]==arr[j])
                    {
                        count++;
                        //arr[j]=-1;
                    }
                }
            }
            if(count==1)
                printf("%d ",arr[i]);
        //}
    }
}