#include<stdio.h>

int main()
{
    int i = 10;

    do
    {
        printf("Hello %d\n", i);
        i = i - 1;
    } while (i > 0);

    return 0;
}
