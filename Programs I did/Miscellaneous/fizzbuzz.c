#include <stdio.h>

int main()
{
    int i = 1;
    for (i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}