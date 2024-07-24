/*
         *
       * *
     * * *
   * * * *
 * * * * *
*/

#include<stdio.h>

int main()
{
    char ch = '*';
    int n;
    int i, j, no_of_spaces = 0, spaceCount;

    printf("Enter number of lines for pattern : ");
    scanf("%d", &n);
    printf("\n");
    no_of_spaces = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (spaceCount = no_of_spaces; spaceCount >= 1; spaceCount--)
        {
            printf("  "); //2 spaces
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2c", ch);
        }

        printf("\n");
        no_of_spaces--;
    }

    return 0;
}
