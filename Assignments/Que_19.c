//Income tax calculation
#include<stdio.h>
void main()
{
    float income,tax;
    int percentage;
    printf("Enter the annual income: ");
    scanf("%f",&income);
    if(income>250000)
    {
        if(income<=500000)
            percentage=5;
        else if(income<=1000000)
            percentage=20;
        else
            percentage=30;
        tax=income*percentage/100;
        printf("Income tax amount = %f",tax);
    }
    else
        printf("No Tax");
}