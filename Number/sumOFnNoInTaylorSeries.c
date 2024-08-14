# include<stdio.h>
#include<math.h>

int main()
{
    int x, i;
    int fact = 1, n;
    float sum = 0;
    printf("enter the value of x in the series:");
    scanf("%d", &x);
    printf("enter the number of terms in the series:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        fact = fact * i;
        sum = sum + (pow(x, i) / fact);
    }
    sum = sum + 1;
    printf("the sum of taylor series is:");
    printf("%f", sum);

    return 0;
}