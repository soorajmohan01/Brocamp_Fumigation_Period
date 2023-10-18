//Calculating simple interest
#include<stdio.h>
void main()
{
    int p;
    float r,n,si=0;
    printf("Enter the Principal amount: ");
    scanf("%d",&p);
    printf("Enter the Interest rate: ");
    scanf("%f",&r);
    printf("Enter the number of years: ");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("Simple interest = %f\n",si);
}