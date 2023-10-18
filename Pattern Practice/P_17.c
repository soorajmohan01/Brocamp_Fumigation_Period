/*
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/
#include<stdio.h>
void main()
{
    int i,j;
    char alpha;
    for(i=1;i<=7;i++)
    {
        alpha='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
                printf("%c ",alpha);
                if(j<8-i)
                    alpha++;
                else if(j>=6+i)
                    alpha--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}