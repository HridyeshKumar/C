#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three number : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) if (b > c)
        printf("%d is the second largest no.", b);
    else
        printf("%d is the second largest no.", c);

    if (b > a && b > c) if (a > c)
        printf("%d is the second largest no.", a);
    else
        printf("%d is the second largest no.", c);


    if (c > a && c > b) if (b > a)
        printf("%d is the second largest no.", b);
    else
        printf("%d is the second largest no.", a);

    return 0;
}
