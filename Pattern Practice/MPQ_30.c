/*
* * * * * *
*
* * * * * *
*
*
* * * * * *
*
*
*
* * * * * *
*
*
*
*
* * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        printf("* * * * * *\n");
        if(i<5)
        {
            for(j=1;j<=i;j++)
                printf("*\n");
        }
    }
}