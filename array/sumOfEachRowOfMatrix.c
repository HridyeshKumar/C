#include <stdio.h>

int main()
{
    int m, n, c, d, a[10][10], sum = 0;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of  matrix\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &a[c][d]);
        }
    }
    
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum = sum + a[c][d];
        }
        printf("Sum of %d row : %d\n", c + 1, sum);
        sum = 0;
    }
    return 0;
}
