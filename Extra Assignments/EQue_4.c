//Menu driven program to perform string operations without using library functions
#include<stdio.h>
void STRINGLENGTH();
void STRINGCONCATENATION();
void STRINGREVERSE();
void EXIT();
int i,code;
void main()
{
    int choice;
    while(code!=2222)
    {
        printf("\n1.STRING LENGTH\n2.STRING CONCATENATION\n3.STRING REVERSE\n4.EXIT\n");
        printf("Choose an operation from menu: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: STRINGLENGTH();
                    break;
            case 2: STRINGCONCATENATION();
                    break;
            case 3: STRINGREVERSE();
                    break;
            case 4: EXIT();
                    break;
            default: printf("\nInvaild Choice!\n");
        }
    }
}

void STRINGLENGTH()
{
    char str[50];
    int len=0;
    printf("Enter a string: ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
        len++;
    printf("Length of %s is %d\n",str,len);
}

void STRINGCONCATENATION()
{
    char str1[50],str2[50];
    int len1=0,len2=0,j;
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
        len1++;
    for(i=0;str2[i]!='\0';i++)
        len2++;
    char str3[len1+len2];
    for(i=0;i<len1;i++)
        str3[i]=str1[i];
    for(i=0,j=len1;i<len2;i++,j++)
        str3[j]=str2[i];
    printf("Concatenated string = %s\n",str3);
}

void STRINGREVERSE()
{
    int size=0,len;
    char temp,str[50];
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
        size++;
    len=size-1;
    for(i=0;i<size/2;i++,len--)
    {
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;
    }
    printf("The reversed string = %s\n",str);
}

void EXIT()
{
    code=2222;
}