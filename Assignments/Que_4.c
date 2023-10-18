//Student pass or fail
#include<stdio.h>
void main()
{
    float mark;
    printf("Enter the mark: ");
    scanf("%f",&mark);
    if(mark>=50)
        printf("Passed\n");
    else
        printf("Failed\n");
}