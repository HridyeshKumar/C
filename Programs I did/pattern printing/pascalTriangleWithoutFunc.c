#include<stdio.h>

int main()
{
    int x, y, n, a, z, s;

    printf("Enter the limit: ");

    scanf("%d", &n);
    s = n;

    for (x = 0; x <= n; x++)
    {
        a = 1;
        for (z = s; z >= 0; z--)
            printf(" ");

        s--;

        for (y = 0; y <= x; y++)
        {
            printf("%d ", a);
            a = (a * (x - y) / (y + 1));
        }
        printf("\n");
    }
    return 0;
}
