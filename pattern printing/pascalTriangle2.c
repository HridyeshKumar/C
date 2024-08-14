#include<stdio.h>

int main()
{
    int n, c, k, number = 1, space = n;

    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\n");
    space = n;

    for (c = 1; c <= n; c++)
    {
        for (k = space; k > 1; k--)
            printf(" ");

        space--;

        for (k = 1; k <= 2 * c - 1; k++)
        {
            if (k <= c)
            {
                printf("%d", number);

                if (k < c)
                    number++;
            }
            else
            {
                number--;
                printf("%d", number);
            }
        }

        number = 1;
        printf("\n");
    }

    return 0;
}