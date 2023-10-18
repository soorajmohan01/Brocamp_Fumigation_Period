//2D array addition using multiple functions
#include<stdio.h>
int i,j,size;
//void getArray(int *,int *,int);
//void addArray(int *[],int *[],int,int *);
//void displayArray(int *[],int);
void getArray(int (*array1)[size],int (*array2)[size],int s)
{
    printf("Enter the values of array 1: ");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            scanf("%d",&array1[i][j]);
    }
    printf("Enter the values of array 2: ");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            scanf("%d",&array2[i][j]);
    }
}
void addArray(int (*arr1)[size],int (*arr2)[size],int s,int (*res)[size])
{
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            res[i][j]=arr1[i][j]+arr2[i][j];
    }
}
void displayArray(int (*result)[size],int s)
{
    printf("Sum of array-1 and array-2:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr1[size][size],arr2[size][size],result[size][size];
    getArray(arr1,arr2,size);
    addArray(arr1,arr2,size,result);
    displayArray(result,size);
}
