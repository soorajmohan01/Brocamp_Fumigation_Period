/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
void main()
{
    int i,j,k=0,row,round;
    printf("Enter the size : ");
    scanf("%d",&row);
    if(row%2==0)
        round=row+1;
    else
        round=row;
    for(i=1;i<=row;i++)
    {
        if(i<row/2+1)
            k++;
        else if(i>row/2+1)
            k--;
        for(j=1;j<=row;j++)
        {
            if(j<=k || j>round-k)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}