#include<stdio.h>

int main()
{
    int sum = 0, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    // Using Math formula
    // (n/2)((n / 2) + 1)
    sum = ((n / 2) * ((n / 2) + 1));

    printf("Sum of even numbers between 1 to %d : %d", n, sum);

    return 0;
}
