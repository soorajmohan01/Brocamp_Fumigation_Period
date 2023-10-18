/* 
                *
            * * *
        * * * * *
    * * * * * * *
* * * * * * * * *
    * * * * * * *
        * * * * *
            * * *
                *
*/
#include<stdio.h>
void main()
{
    int i,j,k=5;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=2*k-1)
                printf("* ");
            else
                printf("  ");
        }
        i<5?k--:k++;
        printf("\n");
    }
}