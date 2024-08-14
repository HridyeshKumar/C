#include <math.h>
#include <stdio.h>

int main(void)
{
    double num, result;

    printf("Enter number to find square root : ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("The square root of %lf is %lf ", num, result);

    return 0;
}
