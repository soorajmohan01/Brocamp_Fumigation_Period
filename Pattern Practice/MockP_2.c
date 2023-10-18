/*
1
2 *
3 * 9
4 * 12 *
5 * 15 * 25
6 * 18 * 30 *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0 && j!=6)
                printf("* ");
            else if(j%2!=0)
                printf("%d ",i*j);
        }
        printf("\n");
    }
}