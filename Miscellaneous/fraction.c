#include <stdio.h>

int main()
{
    //variable declaration
    double number, sum = 0, i;

    //take user input
    printf("Enter the number : ");
    scanf("%lf", &number);

    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i);

        if (i == 1)
        {
            printf("\n1 +");
        }
        else if (i == number)
        {
            printf(" (1 / %1f)", i);
        }
        else
        {
            printf(" (1 / %1f) + ", i);
        }
    }

    //display output
    printf("\n\nThe sum of  series is : %.2lf ", sum);
    printf("\n");

    return 0;
}
