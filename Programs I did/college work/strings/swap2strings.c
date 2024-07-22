#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100], *temp;

    printf("Enter the first string : ");
    gets(str1);

    printf("Enter the second string : ");
    gets(str2);

    printf("\nBefore Swapping two strings\n");
    printf("First string : %s\n", str1);
    printf("Second string : %s\n\n", str2);

    temp = (char *) malloc(100);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("After Swapping new values will be \n");
    printf("First string : %s\n", str1);
    printf("Second string : %s\n", str2);

    return 0;
}
