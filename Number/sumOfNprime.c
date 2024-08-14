#include<stdio.h>

int main()
{
    int n, i = 3, count, c, sum = 2;
    printf("Enter the number of prime numbers for addition\n");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("First %d prime numbers are :\n", n);
        printf("2");
        printf(" ");
    }
    for (count = 2; count <= n;)
    {
        for (c = 2; c <= i - 1; c++)
        {
            if (i % c == 0)
                break;
        }
        if (c == i)
        {
            sum = sum + i;
            printf("%d", i);
            printf(" ");
            count++;
        }
        i++;
    }
    printf("\n");
    printf("Sum :%d\n", sum);
    return 0;
}