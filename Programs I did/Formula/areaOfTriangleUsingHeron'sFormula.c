#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, s, area;

    printf("\nEnter the sides of triangle: \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea of triangle using Heron's Formula: %.2lf\n", area);

    return 0;
}