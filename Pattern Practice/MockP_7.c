/*
1 2 3 4 5 4 3 2 1
1 2 3 4 3 2 1
1 2 3 2 1
1 2 1
1
*/
#include<stdio.h>
void main()
{
    int i,j,k,l=9;
    for(i=5;i>=1;i--)
    {
        k=1;
        for(j=1;j<=l;j++)
        {
            printf("%d ",k);
            j<i?k++:k--;
        }
        printf("\n");
        l=l-2;
    }
}