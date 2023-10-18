//Compare two strings without using string functions
#include<stdio.h>
void main()
{
    int i,size,flag=0;
    printf("Enter the size of string: ");
    scanf("%d",&size);
    char str1[size],str2[size];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    for(i=0;i<size;i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Both strings are same.\n");
    else
        printf("Both strings are different.\n");
}