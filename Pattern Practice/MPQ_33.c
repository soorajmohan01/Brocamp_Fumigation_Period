/*
X X X X
X X X
X
X
X
X X X
X X
X
X
X
X X
X
*/
#include<stdio.h>
void main()
{
    int i,j,k,l=7;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=l;j++)
        {
            printf("X ");
            if(j==l/2+1)
                printf("\n");
        }
        printf("\n");
        l=l-2;
        if(i<3)
        {
            for(k=1;k<=3;k++)
                printf("X\n");
        }
    }
}