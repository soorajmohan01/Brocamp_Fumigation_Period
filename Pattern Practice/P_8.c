/*
          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4
5 4 3 2 1 0 1 2 3 4 5
*/
#include<stdio.h>
void main()
{
    int i,j,k,size;
    printf("Enter the size: ");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        k=i-1;
        for(j=1;j<=2*size-1;j++)
        {
            if(j>=size+1-i && j<=size-1+i)
            {
                printf("%d ",k);
                j<size?k--:k++;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}