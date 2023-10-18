/*
X X X X
X X X
X
X
X X X
X X
X
X
X X
X
*/
#include<stdio.h>
void main()
{
    int i,j,l;
    for(i=3;i>=1;i--)
    {
        l=2*i+1;
        for(j=1;j<=l;j++)
        {
            printf("X ");
            if(j==(l/2)+1)
                printf("\n");
        }
        printf("\n");
        if(i>1)
            printf("X\nX\n");
    }
}