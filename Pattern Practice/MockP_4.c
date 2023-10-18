/*
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        k=0;
        for(j=1;j<=2*i-1;j++)
        {
            j<i+1?k++:k--;
            printf("%d ",k);
        }
        printf("\n");
    }
}