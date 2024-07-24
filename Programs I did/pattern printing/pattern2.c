/*
   *
  *A*
 *A*A*
*A*A*A*

*/

#include <stdio.h>

int main()
{

    int n, c, k, space, count = 1;

    printf("Enter number of rows\n");
    scanf("%d", &n);

    space = n;

    for (c = 1; c <= n; c++)
    {

        for (k = 1; k < space; k++)
            printf(" ");

        for (k = 1; k <= c; k++)
        {
            printf("*");

            if (c > 1 && count < c)
            {

                printf("A");
                count++;

            }
        }

        printf("\n");
        space--;
        count = 1;

    }

    return 0;
}