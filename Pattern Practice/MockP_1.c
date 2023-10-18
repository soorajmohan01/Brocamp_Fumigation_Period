/*
*                   *
* * *           * * *
* * * * *   * * * * *
* * * * * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        i<7?k++:k--;
        l=2*k-1;
        for(j=1;j<=11;j++)
        {
            if(j<=l || j>=12-l)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}