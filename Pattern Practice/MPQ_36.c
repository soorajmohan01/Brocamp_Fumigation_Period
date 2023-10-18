/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=11;i++)
    {
        i<7?k++:k--;
        for(j=1;j<=k;j++)
            printf("%d ",j);
        printf("\n");
    }
}