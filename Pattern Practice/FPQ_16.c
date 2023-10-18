/*
X X
_ X X
X X
X X
_ X X X X
X X
X X
X X
_ _ _ X X X X X X X X
*/
#include<stdio.h>
void main()
{
    int i,j,k,m;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("X ");
            if(j%2==0)
                printf("\n");
        }
        i==3?(m=2):(m=0);
        for(k=1;k<=3*i+m;k++)
        {
            if(k<=i)
                printf("_ ");
            else
                printf("X ");
        }
        printf("\n");
    }
}