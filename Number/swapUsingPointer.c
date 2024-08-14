#include<stdio.h>

int main()
{

    int a, b;
    int *ptra, *ptrb;
    int *temp;

    printf("Enter value for a : ");
    scanf("%d", &a);
    printf("Enter value for b : ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b=%d", a, b);

    ptra = &a;
    ptrb = &b;

    temp = ptra;
    *ptra = *ptrb;
    *ptrb = *temp;

    printf("\nAfter swapping: a = %d, b=%d", a, b);
    return 0;
}
