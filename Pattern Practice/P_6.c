/*
* _ * _ * _
* _ * _ *
* _ * _
* _ *
* _
*
* _
* _ *
* _ * _
* _ * _ *
* _ * _ * _
*/
#include<stdio.h>
void main()
{
    int i,j,k=1,m;
    for(i=1;i<=11;i++)
    {
        m=1;
        for(j=1;j<=6;j++)
        {
            if(j<=7-k)
            {
                if(m)
                {
                    printf("* ");
                    m=0;
                }
                else
                {
                    printf("_ ");
                    m=1;
                }
            }
        }
        i<6?k++:k--;
        printf("\n");
    }
}