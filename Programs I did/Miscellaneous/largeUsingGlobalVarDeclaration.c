#include<stdio.h>

// Global variable declaration
int a, b;

int main()
{
    printf("enter the two values to find the greatest number : ");
    scanf("%d%d", &a, &b);

    //logic to find the largest and smallest numbers
    if (a < b)
    {
        printf("\nthe largest number is : %d", b);
        printf("\nthe Smallest number is : %d", a);
    }
    else if (a == b)
    {
        printf("Both are Equal");
    }
    else
    {
        printf("\nthe largest number is : %d", a);
        printf("\nthe Smallest number is : %d", b);
    }

    return 0;
}
