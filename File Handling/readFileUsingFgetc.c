#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char filename[15];
    char ch;

    printf("Enter the filename to be opened : ");
    scanf("%s", filename);

    /*  open the file for reading */
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    printf("Reading %s File\n",filename);
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}
