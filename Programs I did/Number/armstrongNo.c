#include <stdio.h>

int main()
{

    /*An Armstrong number is a number such that the sum
      ! of its digits raised to the third power is equal to the number
      ! itself.  For example, 371 is an Armstrong number, since
      ! 3**3 + 7**3 + 1**3 = 371.*/

    int a, n, b = 0, t;

    printf("Enter the no: ");

    scanf("%d", &n);

    t = n;

    while (n > 0)
    {
        a = n % 10;

        b = b + a * a * a;

        n = n / 10;

    }

    if (b == t)
    {
        printf("Its an Armstrong number");
    }

    else
    {
        printf("Its Not an Armstrong number");
    }

    return 0;

}