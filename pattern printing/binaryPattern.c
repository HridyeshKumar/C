/*
1
01
101
0101
10101
*/
#include<stdio.h>

int main()
{
    int i, j;
    int count = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", count++ % 2);
            if (j == i && i != 5)
                printf("\n");
        }

        if (i % 2 == 0)
            count = 1;
        else
            count = 0;
    }
    return (0);
}
