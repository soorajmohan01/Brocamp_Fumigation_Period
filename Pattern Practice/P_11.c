/*
* * * * * * * * * *
* * * *   * * * *
* * *     * * *
* *       * *
*         *
*         *
* *       * *
* * *     * * *
* * * *   * * * *
* * * * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if((j<=6-k)||(j>=6 && j<=11-k))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        if(i<5)
            k++;
        else if(i>5)
            k--;
    }
}