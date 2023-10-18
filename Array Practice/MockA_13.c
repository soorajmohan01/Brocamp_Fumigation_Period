//Program to shift zero to last without sorting.
#include<stdio.h>
void main()
{
    int i,j,size,pos,temp,flag;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;)
    {
        flag=0;
        if(arr[i]==1)
        {
            temp=arr[i];
            //arr[size]=arr[i];
            //pos=i;
            for(j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
                flag=1;
            }
            arr[size-1]=temp;
            //i--;
        }
        if(flag==1)
        {
            i=i;
            flag=0;
        }
        else
        {
            i++;
        }
        /*if(flag==0)
            i++;*/
    }
    printf("Updated array = ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}

