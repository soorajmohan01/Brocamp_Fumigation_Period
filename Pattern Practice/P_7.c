/*
*           *
* *       * *
*   *   *   *
*     *     *
*   *   *   *
* *       * *
*           *
*/
#include<stdio.h>
void main()
{
    int i,j,size;
    printf("Enter the size: ");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(j==1 || j==size)
                printf("* ");
            else if(j==i || j==size+1-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}