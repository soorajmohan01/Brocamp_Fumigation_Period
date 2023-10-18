/*
*
* A *
* B * C *
* D * E * F
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    char alpha='A';
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<2*i;j++)
        {
            if(k)
            {
                printf("* ");
                k=0;
            }
            else
            {
                printf("%c ",alpha);
                alpha++;
                k=1;
            }
        }
        printf("\n");
    }
}