/*
 *********
  *******
   *****
    ***
     *
    ***
   *****
  *******
 *********
*/

#include<stdio.h>

int main()
{
    int num, n, r, c, sp;

    printf("Enter number of rows: ");
    scanf("%d", &num);
    printf("\n");

    n = num;

    for (r = 1; r <= num; r++)
    {
        for (sp = 1; sp <= r; sp++)
            printf(" ");

        for (c = 1; c <= n; c++)
            printf("*");

        for (c = num - r; c >= 1; c--)
            printf("*");

        n--;
        printf("\n");
    }

    for (r = 2; r <= num; r++)
    {
        for (sp = num - r + 1; sp >= 1; sp--)
            printf(" ");

        for (c = 1; c <= r; c++)
            printf("*");

        for (c = r - 1; c >= 1; c--)
            printf("*");

        printf("\n");
    }

    return 0;
}
