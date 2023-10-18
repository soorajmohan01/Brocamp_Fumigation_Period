/*
X
XXX
X
X
XXXXXX
X
X
X
XXXXXXXXX
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("X\n");
        }
        for(k=1;k<=3*i;k++)
            printf("X");
        printf("\n");
    }
}