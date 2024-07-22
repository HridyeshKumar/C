#include<stdio.h>

int lcm(int, int);

int main()
{

    int a, b, l;
    printf("Enter any two positive integers ");
    scanf("%d%d", &a, &b);

    if (a > b)
        l = lcm(a, b);
    else
        l = lcm(b, a);

    printf("LCM of two integers is %d", l);

    return 0;
}

int lcm(int a, int b)
{

    static int temp = 1;

    if (temp % b == 0 && temp % a == 0)
        return temp;
    temp++;
    lcm(a, b);

    return temp;
}
