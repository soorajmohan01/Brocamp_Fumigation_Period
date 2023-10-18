/*
**
*
*
*
****
*
*
*
*
*
*
******
*/
#include<stdio.h>
void main()
{
    int i,j,k,l=0;
    for(i=1;i<4;i++)
    {
        for(j=1;j<=l;j++)
            printf("*\n");
        for(k=1;k<=i*2;k++)
            printf("*");
        l=l+3;
        printf("\n");
    }
}






/*Skip two elements after the occurance of odd number and print pattern with it
#include <stdio.h>
void main() 
{
    int i,skipcount=0,size=10;
    int arr[];
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            printf("*\n");
            skipcount=0;
        }
        if(skipcount<2)
        {
            printf("*\n");
            skipcount++;
        }
    }
} */



