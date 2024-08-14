#include<stdio.h>

int main()
{
    float x[10], y[10], temp = 1, f[10], sum, p;
    int i, n, j, k = 0, c;

    printf("How many record you will be enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nenter the value of x%d: ", i);
        scanf("%f", &x[i]);

        printf("\n\nenter the value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }

    printf("\n\nEnter X for finding f(x): ");
    scanf("%f", &p);

    for (i = 0; i < n; i++)
    {
        temp = 1;
        k = i;
        for (j = 0; j < n; j++)
        {
            if (k == j)
            {
                continue;
            }
            else
            {
                temp = temp * ((p - x[j]) / (x[k] - x[j]));
            }
        }
        f[i] = y[i] * temp;
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + f[i];
    }

    printf("\n\nf(%.1f) = %f ", p, sum);
    return 0;
}
