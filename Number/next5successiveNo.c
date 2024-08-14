#include <stdio.h>

void successiveNumbers(int);

int main()
{
    int n;
    printf("Enter no. for printing next 5 successive numbers : ");
    scanf("%d", &n);
    successiveNumbers(n);
    return 0;
}

void successiveNumbers(int number)
{
    int temp = number;
    printf("Successive Numbers from %d\n", number);

    for (; temp < number + 5; temp++)
        printf("%d\n", temp);
}
