//Knuth Morris Pratt Algorithm(KMP string matching )
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int kmpSearch(char *str, char *word, int *ptr)
{
    int i = 0, j = 0;

    while ((i + j) < strlen(str))
    {
        // match found on the target and pattern string char
        if (word[j] == str[i + j])
        {
            if (j == (strlen(word) - 1))
            {
                printf("%s located at the index %d\n",
                       word, i + 1);
                return 0;
            }
            j = j + 1;
        }
        else
        {
            // manipulating next indices to compare
            i = i + j - ptr[j];
            if (ptr[j] > -1)
            {
                j = ptr[j];
            }
            else
            {
                j = 0;
            }
        }
    }
}

// find the overlap array for the given pattern
void findOverlap(char *word, int *ptr)
{
    int i = 2, j = 0, len = strlen(word);

    ptr[0] = -1;
    ptr[1] = 0;

    while (i < len)
    {
        if (word[i - 1] == word[j])
        {
            j = j + 1;
            ptr[i] = j;
            i = i + 1;
        }
        else if (j > 0)
        {
            j = ptr[j];
        }
        else
        {
            ptr[i] = 0;
            i = i + 1;
        }
    }
}

int main()
{
    char word[256], str[1024];;
    int *ptr, i;

    /* get the target string from the user */
    printf("Enter your target string:");
    fgets(str, 1024, stdin);
    str[strlen(str) - 1] = '\0';

    /* get the pattern string from the user */
    printf("Enter your pattern string:");
    fgets(word, 256, stdin);
    word[strlen(word) - 1] = '\0';

    /* dynamic memory allocation for overlap array */
    ptr = (int *) calloc(1, sizeof(int) * (strlen(word)));

    /* finds overlap array */
    findOverlap(word, ptr);
    /* find the index of the pattern in target string */
    kmpSearch(str, word, ptr);

    return 0;
}
