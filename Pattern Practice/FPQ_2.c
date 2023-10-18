/*
***
*
******
*
*
*********
*
*
*
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3*i;j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=1;k<=i;k++)
            printf("*\n");
    }
}