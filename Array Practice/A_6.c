//Insert an elements into a specified position.
#include<stdio.h>
void main()
{
    int i,j,size,pos,val;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position to insert: ");
    scanf("%d",&pos);
    printf("Enter the value to insert: ");
    scanf("%d",&val);
    for(i=0;i<size;i++)
    {
        if(i==pos-1)
        {
            for(j=size;j>=pos-1;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[pos-1]=val;
        }
    }
    printf("Updated array = ");
    for(i=0;i<=size;i++)
        printf("%d ",arr[i]);
}