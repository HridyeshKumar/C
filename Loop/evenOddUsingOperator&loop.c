#include <stdio.h>

int main()
{
    int x;
    for (x = 0; x <= 10; x++)
    {
        if (x & 1)
        {
            printf("%d - odd\n", x);
        }
        else
        {
            printf("%d - even\n", x);
        }
    }

    return 0;
}
