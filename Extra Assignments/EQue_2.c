/*
     1
    1 1
   1 2 1
  1 2 3 1
 1 2 3 4 1
1 2 3 4 5 1
*/
#include<stdio.h>
void main()
{
    int i,j,count,l;
    for(i=1;i<=6;i++)
    {
        count=0;
        for(j=1;j<=11;j++)
        {
            if(j>=7-i && j<=5+i && l)
            {
                l=0;
                j==5+i?count=1:count++;
                printf("%d",count);
            }
            else
            {
                printf(" ");
                l=1;
            }
        }
        printf("\n");
    }
}