/*
    I
   NI
  DNI
 IDNI
AIDNI
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    char arr[]={'I','N','D','I','A'};
    for(i=5;i>0;i--)
    {
        for(j=4;j>=0;j--)
        {
            if(j<=5-i)
            {
                printf("%c ",arr[j]);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}