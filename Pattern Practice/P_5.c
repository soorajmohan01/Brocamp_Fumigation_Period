/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
#include<stdio.h>
void main()
{
    int i,j,k,m,row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    m=row*2;
    for(i=1;i<=row;i++)
    {
        k=i;
        for(j=1;j<=m-1;j++)
        {
            if(j>=row+1-i && j<=row-1+i)
            {
                printf("%d ",k);
                j<m/2?k++:k--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}