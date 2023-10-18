//Sum of an integer and a float number 
#include<stdio.h>
void main()
{
    int num1;
    float num2,sum=0;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    sum=num1+num2;
    printf("Sum of %d and %f = %f\n",num1,num2,sum);
}