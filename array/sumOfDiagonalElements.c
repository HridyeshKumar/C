#include<stdio.h>

int main()
{
    //declaring a 2d array
    int a[10][10];
    //declaring variables
    int i, j, n, m, sum = 0;

    printf("enter rows and columns of the matrix:");
    scanf("%d%d", &m, &n);

    printf("enter the values in the matirx:");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            // finding sum of diagonal elements
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        sum = sum + a[i][i];
    }
    
    printf("the sum of diagonal elements is:%d", sum);
    return 0;
}
