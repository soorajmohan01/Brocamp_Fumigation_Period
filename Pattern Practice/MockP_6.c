/*
0 1 0 1 0 1
1 0 1 0 1
0 1 0 1
1 0 1
0 1
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
            k=0;
        else
            k=1;
        for(j=1;j<=7-i;j++)
        {
            printf("%d ",k);
            if(k)
                k=0;
            else
                k=1;
        }
        printf("\n");
    }
}