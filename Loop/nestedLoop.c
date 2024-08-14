#include<stdio.h>

int main()
{
    int i, j, k;

    printf("Output of nested loop is : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", i + j);
        }
    }

    return 0;
}
