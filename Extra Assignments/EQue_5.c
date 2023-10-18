//Program to copy one string into another without using string functions.
#include<stdio.h>
void main()
{
    int i,size;
    printf("Enter the size of the string: ");
    scanf("%d",&size);
    char str[size],str2[size];
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;i<size;i++)
        str2[i]=str[i];
    printf("Copied string: %s\n",str2);
}