/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}