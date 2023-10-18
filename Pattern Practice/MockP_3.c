/*
0 1
0 2 4
0 3 6 9
0 4 8 12 16
0 5 10 15 20 25
0 6 12 18 24 30 36
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        k=i;
        for(j=1;j<=i+1;j++)
        {
            if(j==1)
                printf("0 ");
            else
            {
                printf("%d ",k);
                k=k+i;
            }
        }
        printf("\n");
    }
}