/*
 1
 21
 321
 4321
 */

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of lines in pattern : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}