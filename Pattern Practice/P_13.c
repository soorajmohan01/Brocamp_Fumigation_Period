/*
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 3 4 3 2 1 *
* 1 2 3 4 5 4 3 2 1 *
* 1 2 3 4 3 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*
*/
#include<stdio.h>
void main()
{
    int i,j,k=1,m;
    for(i=1;i<=11;i++)
    {
        m=1;
        for(j=1;j<2*k;j++)
        {
            if(j==1 || j==2*k-1)
                printf("* ");
            else
            {
                printf("%d ",m);
                if(j<k)
                    m++;
                else
                    m--;
            }
        }
        printf("\n");
        i<6?k++:k--;
    }
}