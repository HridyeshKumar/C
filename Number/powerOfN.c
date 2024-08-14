#include <stdio.h>

int main()
{
    int base, exp;
    double value = 1;
    printf("Enter base number and exponent respectively: ");
    scanf("%d%d", &base, &exp);
    while (exp != 0)
    {
        // value = value * base;
        value *= base;
        --exp;
    }
    printf("Answer = %f", value);

    return 0;
}