#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int length;

    printf("Enter a string to calculate it's length\n");
    gets(a);

    length = strlen(a);

    printf("Length of entered string is = %d\n", length);

    return 0;
}
