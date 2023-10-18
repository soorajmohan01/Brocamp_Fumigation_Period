//Decimal to binary conversion
#include<stdio.h>
void main()
{
    int num,i,binary[50],count=0;
    printf("Enter the number to convert: ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        if(num%2==0)
        {
            binary[i]=0;
            count++;
        }
        else
        {
            binary[i]=1;
            count++;
        }
        num=num/2;
    }
    printf("Binary equivalent = ");
    for(i=count-1;i>=0;i--)
        printf("%d ",binary[i]);
}