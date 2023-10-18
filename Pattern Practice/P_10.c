/*
          *
        *   *
      *       *
    *           *
  *               *
*                   *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
#include<stdio.h>
void main()
{
    int i,j,m=0,k=1,l=1;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        {
            if((j==7-k || j==5+k) && m==0)
                printf("* ");
            else if((j>=7-k && j<=5+k) && m)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        i<6?(k++,l++):(k--,l--);
        if(i==6)
            m=1;
    }
}