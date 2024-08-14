#include <stdio.h>

int main()
{

    int a, b, c, i, n;

    a = 0;
    b = 1;

    printf("Enter a number to define the length of fibonacci series: ");
    scanf("%d", &n);
    printf("\nThe Series is: \n");
    printf("%d\t%d", a, b);

    for (i = 0; i < n; i++)
    {

        c = a + b;

        a = b;

        b = c;

        printf("\t%d", c);

    }

    return 0;
}