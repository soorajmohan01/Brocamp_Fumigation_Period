/*
1 1 1 1 1 1
1 1 1 1 2 2
1 1 1 3 3 3
1 1 4 4 4 4
1 5 5 5 5 5
6 6 6 6 6 6
*/
#include<stdio.h>
void main()
{
    int i,j,row;
    printf("Enter the size: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(j>=row+1-i)
                printf("%d ",i);
            else
                printf("1 ");
        }
        printf("\n");
    }
}