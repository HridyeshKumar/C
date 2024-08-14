#include<stdio.h>

int main()
{
    int upper = 0, lower = 0;
    char ch[80];
    int i;

    printf("Enter string : ");
    gets(ch);

    i = 0;
    while (ch[i] != '\0')
    {
        //uppercase counter
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        
        //lowercase counter
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
        
        i++;
    }

    printf("\nUppercase Letters : %d", upper);
    printf("\nLowercase Letters : %d", lower);

    return (0);
}
