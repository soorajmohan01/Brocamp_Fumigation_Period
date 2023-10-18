/*
1 1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int i,j,k,m;
    for(i=1;i<=6;i++)
    {
        k=1;
        i==1?(m=0):(m=1);
        for(j=1;j<=2*i-m;j++)
        {
            if(i==1 && j==2)
                printf("1");
            else
            {
                printf("%d ",k);
                j<i?k++:k--;
            }
        }
        printf("\n");
    }
}