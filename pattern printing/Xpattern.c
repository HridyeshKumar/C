/*
1     1
 2   2
  3 3
   4
  3 3
 2   2
1     1
*/

#include<stdio.h>

int main()
{
    int i, j, k = 1;
    int m[7][7] = {0};
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == i || 8 - i == j)
            {
                m[i - 1][j - 1] = k;
            }
        }
        if (i < 4)
        {
            k++;
        }
        else
        {
            --k;
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (m[i][j] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("%d", m[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
