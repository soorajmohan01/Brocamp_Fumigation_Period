//Sum of two dimensional arrays
#include<stdio.h>
void main()
{
    int size,i,j;
    printf("Enter the size of arrays: ");
    scanf("%d",&size);
    int arr1[size][size],arr2[size][size],sum[size][size];
    printf("Enter the values of array 1:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("Enter the values of array 2:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            scanf("%d",&arr2[i][j]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            sum[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("Sum of two array is\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            printf("%d ",sum[i][j]);
        printf("\n");
    }
}