/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-k && j<=3+k)
                printf("*");
            else
                printf(" ");
        }
        i<4?k++:k--;
        printf("\n");
    }
}