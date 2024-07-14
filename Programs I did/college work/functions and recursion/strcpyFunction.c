#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[100];
    char str3[1000];
    strcpy(str2, str1);
    strcpy(str3, "how are you?");
    printf("str1 : %s\nstr2 : %s\nstr3 : %s\n", str1, str2, str3);
    return 0;
}
