#include<stdio.h>

int main()
{
    int a, b, c, big;
    printf("\nEnter 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);

    big = (a > b && a > c ? a : b > c ? b : c);
    printf("\nThe biggest number is: %d", big);

    return 0;
}
