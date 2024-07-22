#include <stdio.h>

int main()
{
    int input, firstNumber, lastNumber;
    printf("Enter number : ");
    scanf("%d", &input);

    lastNumber = input % 10;
    firstNumber = input;

    while (firstNumber >= 10)
        firstNumber /= 10;

    printf("Addition of first and last number , %d + %d = %d",
           firstNumber, lastNumber, firstNumber + lastNumber);

    return 0;
}
