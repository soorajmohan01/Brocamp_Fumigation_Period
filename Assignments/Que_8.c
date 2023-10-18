//Sum of odd numbers upto a limit
#include<stdio.h>
void main()
{
    int i,sum=0,limit;
    printf("Enter a limit: ");
    scanf("%d",&limit);
    for(i=1;i<limit;i++)
    {
        if(i%2==1)
            sum=sum+i;
    }
    printf("Sum of odd numbers = %d\n",sum);
}