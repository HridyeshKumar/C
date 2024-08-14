#include<stdio.h>

int main()
{
    // Initializing the variable
    int n, d, a, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    a = n;

    // Finding the sum of digit
    while (a > 0)
    {
        d = a % 10;
        sum = sum + d;
        a = a / 10;
    }

    //Checking if the remainder is zero or not
    if (n % sum == 0)
        printf("\nThe number is Niven Number ");
    else
        printf("\nThe number is not a Niven Number ");

    return 0;
}
