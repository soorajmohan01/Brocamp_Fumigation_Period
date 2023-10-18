/*
*
* * *
*
* * *
* * *
*
* * *
* * *
* * *
*
* * *
* * *
* * *
* * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        printf("*\n");
        for(j=1;j<=3*i;j++)
        {
            printf("* ");
            if(j%3==0)
                printf("\n");
        }
    }
}