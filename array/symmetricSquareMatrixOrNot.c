#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a[10][10], b[10][10], n, temp;
    printf("\nEnter the dimensions of matrix:: ");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix::\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nOriginal Matrix is:: ");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", a[i][j]);
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }

    printf("\nTranspose Matrix is:: ");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", b[i][j]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                printf("\nMatrix is not symmetric  :(\n");
                exit(0);
            }
        }
    }
    printf("\nMatrix is symmetric  :)\n");
    return 0;
}
