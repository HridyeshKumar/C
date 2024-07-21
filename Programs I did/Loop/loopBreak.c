#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main()
{
    int a, b;

    srand(time(NULL));

    while (1)
    {
        // not exactly uniformly distributed, but doesn't matter
        a = rand() % 20;
        printf("%d\n", a);
        if (a == 10)
        {
            break;
        }
        // not exactly uniformly distributed, but doesn't matter
        b = rand() % 20;
        printf("%d\n", b);
    }
    return 0;
}
