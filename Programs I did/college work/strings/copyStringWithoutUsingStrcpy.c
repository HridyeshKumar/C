#include<stdio.h>

void stringCopy(char[], char[]);

int main()
{

    char str1[100], str2[100];

    printf("Enter any string: ");
    scanf("%s", str1);

    stringCopy(str1, str2);

    printf("After copying: %s", str2);

    return 0;
}

void stringCopy(char str1[], char str2[])
{

    int i = 0;

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

}
