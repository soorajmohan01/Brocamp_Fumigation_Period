/*
a
B c
D e F
g H i J
k L m N o
*/
#include<stdio.h>
void main()
{
    int i,j,k=1;
    char cap='B',small='a';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k)
            {
                printf("%c ",small);
                k=0;
                small=small+2;
            }
            else
            {
                printf("%c ",cap);
                k=1;
                cap=cap+2;
            }
        }
        printf("\n");
    }
}