/*
*
* *
*
*
* * * *
*
*
*
* * * * * *
*
*
*
*
* * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        for(k=1;k<=2*i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}