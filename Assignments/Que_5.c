//Grade of student
#include<stdio.h>
void main()
{
    float mark;
    char grade;
    printf("Enter the mark: ");
    scanf("%f",&mark);
    if(mark>49)
    {
        if(mark<60)
            grade='E';
        else if(mark<70)
            grade='D';
        else if(mark<80)
            grade='C';
        else if(mark<90)
            grade='B';
        else
            grade='A';
        printf("Grade scored = %c\n",grade);
    }
    else
        printf("Failed");
}