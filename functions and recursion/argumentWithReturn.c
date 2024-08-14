#include<stdio.h>

int sumf(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    int sumf(int, int);
    printf("Enter the values of a and b:");
    scanf("%d%d", &a, &b);
    printf("\nThe sum of two numbers is done by function with argument and with return value - sum : ");
    printf("%d", sumf(a, b));
    return 0;
}
