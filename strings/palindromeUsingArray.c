#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int length, counter;

    printf("Please enter a word: ");
    scanf("%s", word);
    length = strlen(word);
    int flag = 1;

    for (counter = 0; counter < length / 2 && flag; counter++)
    {
        if (word[counter] != word[length - counter - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("\n%s is a palindrome.", word);
    }
    else
    {
        printf("\n%s is NOT a palindrome.", word);
    }

    return 0;
}