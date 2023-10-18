/*
1 * * * * * * 1
1 2 * * * * 2 1
1 2 3 * * 3 2 1
1 2 3 4 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=8;j++)
        {
            if(j<=i || j>=9-i)
            {
                printf("%d ",k);
                if(j<i)
                    k++;
                else if(j>i)
                    k--;
            }
            else
                printf("* ");
        }
        printf("\n");
    }
}