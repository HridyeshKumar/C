#include<stdio.h>
int string_ln(char*);
void main()
{
    char str[20];
    int length;
    printf("\nEnter the string:");
    gets(str);
    length=string_ln(str);
    printf("The length of the given string %s is %d",str,length);
}
int string_ln(char*p)
{
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}


