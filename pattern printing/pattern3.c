#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int c = 'A';
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", c);
            c = c + 1;
        }
        printf("\n");
    }
    return 0;
}