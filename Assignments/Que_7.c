//Multiplication table
#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,num,(i*num));
    }
}