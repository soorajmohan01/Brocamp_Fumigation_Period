//String is a palindrome or not
#include<stdio.h>
void main()
{
    char word[50];
    int i,len=0,flag=0;
    printf("Enter a string: ");
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++)
        len++;
    for(i=0;i<len/2;i++)
    {
        if(word[i]!=word[len-i-1])
            flag=1;
    }
    if(flag==1)
        printf("Entered string is not a palindrome");
    else
        printf("Entered string is a palindrome");
}