/*
      1
    2   2
  3       3
4           4
  3       3
    2   2
      1
*/
#include<stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= (i - 1) * 2 - 1; j--)
            printf(" ");
        printf("%d", i);
        for (j = 2; j <= (i - 1) * 4; j++)
            printf(" ");
        if (i > 1)
            printf("%d", i);
        printf("\n");
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 4; j >= (i - 1) * 2 - 1; j--)
            printf(" ");
        printf("%d", i);
        for (j = 2; j <= (i - 1) * 4; j++)
            printf(" ");
        if (i > 1)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}
