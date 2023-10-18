/*
*
$ *
* $ *
$ * $ *
* $ * $ *
*/
#include<stdio.h>
void main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
            k='*';
        else
            k='$';
        for(j=1;j<=i;j++)
        {
            printf("%c ",k);
            if(k=='*')
                k='$';
            else
                k='*';
        }
        printf("\n");
    }
}