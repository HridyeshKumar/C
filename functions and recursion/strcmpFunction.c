#include <stdio.h>
#include <string.h>

int main()
{
    //variable declaration
    char str1[100], str2[100];

    //take user input
    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    //use of strcmp function for comparison
    if (strcmp(str1, str2) == 0)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");

    return 0;
}
