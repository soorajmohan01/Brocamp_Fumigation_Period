/*
3
6 9
12 15 18
21 24 27 30
70 63 56 49
42 35 28
21 14
7
*/
#include<stdio.h>
void main()
{
    int i,j,k=1,m=1,num1,num2;
    printf("Enter the numbers\n");
    printf("Number 1 : ");
    scanf("%d",&num1);
    printf("Number 2 : ");
    scanf("%d",&num2);
    for(i=1;i<=8;i++)
    {
        if(i==5)
            k--;
        for(j=1;j<=m;j++)
        {
            if(i<5)
            {
                printf("%d ",(num1*k));
                k++;
            }
            else
            {
                printf("%d ",(num2*k));
                k--;
            }
        }
        if(i<4)
            m++;
        else if(i>4)
            m--;
        printf("\n");
    }
}