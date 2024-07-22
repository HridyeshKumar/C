#include<stdio.h>

int gcd(int x, int y)
{
    int i;
    for (i = x; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    return i;
}

int main()
{
    int x, y = -1;
    printf("Insert numbers. To exit insert zero: ");

    while (1)
    {
        scanf("%d", &x);
        if (x < 1)
            break;
        else if (y == -1)
            y = x;
        else if (x < y)
            y = gcd(x, y);
        else
            y = gcd(y, x);
    }

    printf("GCD is %d", y);

    return 0;
}

