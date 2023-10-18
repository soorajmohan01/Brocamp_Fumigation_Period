/*
A
1 1
B B B
2 2 2 2
C C C C C
3 3 3 3 3 3
D D D D D D D
*/
#include<stdio.h>
void main()
{
    int i,j,num=1,flag;
    char alpha='A';
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
                printf("%c ",alpha);
            else
                printf("%d ",num);
        }
        i%2!=0?alpha++:num++;
        printf("\n");
    }
}