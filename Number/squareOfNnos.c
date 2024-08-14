#include<stdio.h>

int main()
{
    int n, r, i, sqr = 0;

    printf("\nENTER THE RANGE.:= ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++)
    {

        n = i;
        sqr = n * n;
        printf("\nSQUARE OF %d is %d .", n, sqr);

    }

    return 0;

}
