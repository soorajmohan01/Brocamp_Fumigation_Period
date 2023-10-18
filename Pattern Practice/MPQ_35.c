/*
* * * * *
  * * * * *
    * * * * *
      * * * * *
        * * * * *
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=4+i;j++)
        {
            if(j>=i)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
}