#include<stdio.h>

void Fibonacciseries(int);

int main()
{
    int k, n;
    printf("Enter the range of the Fibonacci series: ");
    scanf("%d", &n);
    n = n - 2;
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);
    Fibonacciseries(n);
    return 0;
}

/* fibonacci series logic starts using recursion */
void Fibonacciseries(int n)
{
    /* static is used to declare the variables globally*/
    static int first = 0, second = 1, sum;
    if (n > 0)
    {
        sum = first + second;
        first = second;
        second = sum;
        /* printing is done in the function itself only*/
        printf("%d \t", sum);
        Fibonacciseries(n - 1);
    }
}