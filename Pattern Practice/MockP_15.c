/*
* * * * * * * *
* *         * *
*   *     *   *
*     * *     *
*     * *     *
*   *     *   *
* *         * *
* * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==1||i==8||j==1||j==8)
                printf("* ");
            else if(i==j || j==9-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}