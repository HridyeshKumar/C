/*

* *
** **
*** ***
**** ****

*/
#include<stdio.h>

int main()
{
    int i, j, k, l, n;
    printf("Enter the number of lines to be printed: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        for (k = i; k <= i; k++)
            printf(" ");
        for (l = 1; l <= i; l++)
            printf("*");

        printf("\n");
    }

    return 0;
}