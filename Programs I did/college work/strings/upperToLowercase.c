#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i;
    printf("Enter string : ");
    gets(str);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = (char) (str[i] + 32);
        }
    }
    printf("String in lowercase : %s", str);
    return 0;
}
