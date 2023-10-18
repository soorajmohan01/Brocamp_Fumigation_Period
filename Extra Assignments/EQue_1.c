//Read "Crossroads" from user and print 8 times without loops.
#include<stdio.h>
int i,count=1;
void RecFun(char []);
void main()
{
    char str[10];
    printf("Enter the word: ");
    scanf("%s",str);
    RecFun(str);
}
void RecFun(char str[])
{
        printf("%s\n",str);
        count++;
        if(count<9)
            RecFun(str);
}
