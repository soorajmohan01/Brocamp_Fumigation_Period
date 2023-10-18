//Calculating grade of a student using weighted average of marks
#include<stdio.h>
void main()
{
    float written,lab,assignment,total=0;
    printf("Enter the marks scored by the students:\n");
    printf("Written Test = ");
    scanf("%f",&written);
    printf("Lab exams = ");
    scanf("%f",&lab);
    printf("Assignments = ");
    scanf("%f",&assignment);
    total=((written*70)/100)+((lab*20)/100)+((assignment*10)/100);
    printf("Grade of the student is %f\n",total);
}