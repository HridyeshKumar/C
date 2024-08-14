#include <stdio.h>

int main()
{
    int i, j, a = 0, n;
    printf("Enter number of lines for pattern : ");
    scanf("%d", &n);
    printf("\n");
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (j == i)
                printf("%d ", a);
            else
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}