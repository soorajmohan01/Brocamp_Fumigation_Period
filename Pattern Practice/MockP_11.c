/*
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,k=0,l=9,m;
    for(i=1;i<=9;i++)
    {
        m=1;
        i<6?k++:k--;
        for(j=1;j<=l;j++)
        {
            if(j>=k)
            {
                if(m==1)
                    printf("* ");
                else
                    printf("  ");
                if(m==1)
                    m=0;
                else
                    m=1;
            }
            else
                printf("  ");
        }
        i<5?l--:l++;
        printf("\n");
    }
}