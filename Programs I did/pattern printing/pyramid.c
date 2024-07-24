/*
     *
    ***
   *****
  *******
 *********
*/

#include <stdio.h>

int main()
{

    int row, c, n, temp;

    printf("Enter the number of rows in pyramid of stars you wish to see ");
    scanf("%d", &n);

    temp = n;

    for (row = 1; row <= n; row++)
    {

        for (c = 1; c < temp; c++)
            printf(" ");

        temp--;

        for (c = 1; c <= 2 * row - 1; c++)
            printf("*");

        printf("\n");

    }

    return 0;
}