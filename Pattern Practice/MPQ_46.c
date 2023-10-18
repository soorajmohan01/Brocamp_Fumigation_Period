/*
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=10;i++)
    {
        if(i<6)
            k++;
        else if(i>6)
             k--;
        for(j=1;j<=10;j++)
        {
            if(j<=6-k || j>=5+k)
                printf("* ");
            else    
                printf("  ");
        }
        printf("\n");
    }
}