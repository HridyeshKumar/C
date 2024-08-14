#include<stdio.h>

int check(int a, int b)
{
    int s = 0, i;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            s = s + i;
        }
    }

    if (s == b)
    {
        s = 0;
        for (i = 1; i < b; i++)
        {
            if (b % i == 0)
            {
                s = s + i;
            }
        }

        if (s == a)
            return 1;
        else
            return 0;
    }

    return 0;
}

int main()
{
    int a, b;

    printf("Enter 1st no. : ");
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    scanf("%d", &b);

    if (check(a, b))
    {
        printf("%d and %d are Amicable Number", a, b);
    }
    else
    {
        printf("%d and %d are not Amicable Number", a, b);
    }
}
