#include <stdio.h>

int main()
{
    int num, rem, qub, sum = 0, i;
    printf("Armstrong numbers between 1 to 500 are: \n");

    for (i = 1; i <= 500; i++)
    {
        num = i;
        sum = 0;

        while (num > 0)
        {
            rem = num % 10;
            qub = rem * rem * rem;
            sum = sum + qub;
            num = num / 10;
        }
        if (sum == i)
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}
