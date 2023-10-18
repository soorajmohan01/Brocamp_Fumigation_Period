/*
* *
*
*
*
* * * *
* * * *
*
*
*
* * * * * *
* * * * * *
* * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=2*i*i;j++)
        {
            printf("* ");
            if(j%(2*i)==0)
                printf("\n");
        }
        if(i<3)
            printf("*\n*\n*\n");
    }
}