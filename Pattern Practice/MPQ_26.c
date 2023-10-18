/*
      * * * *
    *     *
  *     *
* * * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if((i==1 && j>=4) || (i==4 && j<=4))
                printf("* ");
            else if(j==5-i || j==8-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}