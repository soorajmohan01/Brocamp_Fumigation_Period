/*
*  A  *  B  *
  *  C  *  D
   *  E  *
     *  F
       *
     *  G
   *  H   *
 *  I  *  J
*  K  *  L  * 
*/
#include<stdio.h>
void main()
{
    int i,j,k,m,l=1,n=9;
    char alpha='A';
    for(i=1;i<=9;i++)
    {
        k=1;
        m=1;
        for(j=1;j<=9;j++)
        {
            if(j>=l && j<=n)
            {
                if(k==1)
                {
                    if(m==1)
                    {
                        printf("* ");
                        m=0;
                    }
                    else
                    {
                        printf("%c ",alpha);
                        alpha++;
                        m=1;
                    }
                    k=0;
                }
                else
                {
                    printf("  ");
                    k=1;
                }
            }
            else
                printf("  ");
        }
        i<5?(l++,n--):(l--,n++);
        printf("\n");
    }
}