/*
* * * * * * * * * * * * *
* *
* * * * * * * * * * *
* *
* * * * * * * * *
* *
* * * * * * *
* *
* * * * *
* *
* * *
* *
*
*/
#include<stdio.h>
void main()
{
    int i,j,k=13;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("* ");
        }
        k=k-2;
        printf("\n");
        if(i<7)
            printf("* *\n");
    }
}