#include<stdio.h>
#include<string.h>

void concat(char[], char[]);

int main()
{
    char s1[50], s2[30];

    printf("\nEnter String 1 : ");
    gets(s1);
    printf("\nEnter String 2 : ");
    gets(s2);

    concat(s1, s2);

    printf("\nConcated string is : %s", s1);

    return (0);
}

void concat(char s1[], char s2[])
{
    int i, j;

    i = strlen(s1);

    for (j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
}