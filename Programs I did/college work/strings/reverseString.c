#include<stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main()
{
    char arr[100];

    printf("Enter a string to reverse\n");
    gets(arr);

    strrev(arr);

    printf("Reverse of entered string is \n%s\n", arr);

    return 0;
}
