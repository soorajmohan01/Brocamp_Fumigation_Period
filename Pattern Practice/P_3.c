/*
***
***
****
******
******
********
*********
*********
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=6*i;j++)
        {
            printf("*");
            if(j==3*i || j==6*i)
                printf("\n");
        }
        if(i<3)
        {
            for(k=1;k<=4*i;k++)
                printf("*");
            printf("\n");
        }
    }
}