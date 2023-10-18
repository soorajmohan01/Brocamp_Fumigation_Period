/*
X
X X
X X X
X
X X
X X X
X X X X
X 
X X
X X X
X X X X
X X X X X
*/
#include<stdio.h>
void main()
{
    int i,j,k,l,m;
    for(i=1;i<=3;i++)
    {
        l=1;
        k=1;
        i==1?(m=1):(m=0);
        for(j=1;j<=5*i+m;j++)
        {
            if(j<=k)
                printf("X ");
            if(j==k)
            {
                printf("\n");
                l++;
                k=l+k;
            }
        }
    }
}