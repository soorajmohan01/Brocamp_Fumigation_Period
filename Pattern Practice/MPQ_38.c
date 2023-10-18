/*
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=12;i++)
    {
        if(i<7)
            k++;
        else if(i>7)
            k--;
        for(j=1;j<=6;j++)
        {
            if(j<=7-k)
                printf("%d ",j);
        }
        printf("\n");
    }
}