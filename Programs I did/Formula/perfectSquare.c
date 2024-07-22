#include <stdio.h>

int main()
{
    //variable declaration
    int i, number;

    //take user input
    printf("Enter a number  : ");
    scanf("%d", &number);

    //loop to check number is perfect square or not
    for (i = 0; i <= number; i++)
    {
        if (number == i * i)
        {
            printf("\nEntered number is perfect square\n");
            return 0;
        }
    }

    printf("\nEntered number is not perfect square\n");
    return 0;
}