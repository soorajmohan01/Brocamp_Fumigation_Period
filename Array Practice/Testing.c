#include<stdio.h>
void display();
void nestedDisplay()
{
    printf("Function inside a function.\n");
}
int main()
{
    int i,ascii;
    char name[30],alpha;
    // printf("Enter your full name: ");
    // scanf("%s",name);
    // printf("NAME = %s\n",name);
    // display();
    alpha='A';
    ascii=42;
    for(i=0;i<5;i++)
    {
        printf("%c ",ascii);
        ascii++;
    }
    
}
void display()
{
    printf("Function outside the main function!\n");
    nestedDisplay();
}
