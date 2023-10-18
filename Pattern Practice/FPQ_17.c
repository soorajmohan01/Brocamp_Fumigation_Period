/*
X X X X _ _
_ X X X X
X
X X X _ _
_ X X X
X
X
X X _ _
_ X X
X
X
X
X _ _
_ X
X
X
X
X
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=2*i;j++)
        {
            if(j<=i || j>i)
                printf("X ");
            if(j==i)
                printf("_ _\n_");
            if(j==2*i)
                printf("\n");
        }
        for(k=1;k<=5-i;k++)
            printf("X\n");
    }
}