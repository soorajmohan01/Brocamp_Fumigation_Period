/*
*
****
*
*
*
********
*
************
*
*
*
*/
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        if(i%2==1)
            l=1;
        else
            l=3;
        for(j=1;j<=l;j++)
            printf("*\n");
        if(i<4)
        {
            for(k=1;k<=4*i;k++)
                printf("*");
        }
        printf("\n");
    }
}