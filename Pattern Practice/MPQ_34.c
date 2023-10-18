/*
* * * * *
*
*
* * *
*
*
* * * * *
*
*
* * *
*
*
* * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        i%2!=0?(l=5):(l=3);
        for(j=1;j<=l;j++)
            printf("* ");
        printf("\n");
        if(i<5)
        {
            for(k=1;k<=2;k++)
                printf("*\n");
        }
    }
}