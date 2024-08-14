#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    //the array to store the entered sentence
    char *text = (char *) malloc(100 * sizeof(char));

    //used for storing words
    char *temp = (char *) malloc(10 * sizeof(char));

    printf("Enter the line of text(length<100 and word length <10)\n");

    gets(text);

    int ctr = 0;
    int words = 1;
    int row;
    while (text[ctr] != '\0')
        if (text[ctr++] == ' ')
        {
            //count number of words by counting spaces
            words++;
        }


    //A 2-D array of words is made
    char **word = (char **) malloc(words * sizeof(char));

    for (row = 0; row < words; row++)
        word[row] = (char *) malloc(10 * sizeof(char));

    int len = 0;
    row = 0;

    while (len < strlen(text))
    {
        //scanf from appropriate length
        sscanf(text + len, "%s", temp);

        //copy the extracted word to the 2D array
        strcpy(word[row++], temp);

        //scan the next word so sum up the length for previous word and 1 for the space
        len = (int) (len + strlen(temp) + 1);
    }

    char *swaptemp = (char *) malloc(10 * sizeof(char));
    for (row = 0; row < words / 2; row++)
    {
        strcpy(swaptemp, word[row]);
        //swap the first with last second with second last and so on
        strcpy(word[row], word[words - row - 1]);
        strcpy(word[words - row - 1], swaptemp);
    }

    strcpy(text, "");

    for (row = 0; row < words; row++)
    {
        strcat(text, word[row]);
        //form the new text by concatenating the reverse words
        strcat(text, " ");
    }

    printf("%s", text);
}
