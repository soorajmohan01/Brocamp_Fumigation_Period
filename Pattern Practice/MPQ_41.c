/*
1
2 * 2
3 * 3 * 3
4 * 4 * 4 * 4
4 * 4 * 4 * 4
3 * 3 * 3
2 * 2
1
*/
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=8;i++)
    {
        if(i<5)
            k++;
        else if(i>5)
            k--;
        for(j=1;j<2*k;j++)
        {
            if(j%2==0)
                printf("* ");
            else
                printf("%d ",k);
        }
        printf("\n");
    }
}