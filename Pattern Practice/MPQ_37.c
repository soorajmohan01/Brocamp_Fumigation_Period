/*
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5
1 2 3
1
*/
#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        i<4?(k=k+2):(k=k-2);
        printf("\n");
    }
}