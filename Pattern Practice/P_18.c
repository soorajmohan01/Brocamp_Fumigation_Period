/*
H
H E
H E L
H E L L
H E L L O
H E L L
H E L
H E 
H
*/
#include<stdio.h>
void main()
{
    int i,j,k=0;
    char arr[]={"HELLO"};
    for(i=1;i<=9;i++)
    {
        i<6?k++:k--;
        for(j=0;j<k;j++)
        {
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
}