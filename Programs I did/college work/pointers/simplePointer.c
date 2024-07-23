#include <stdio.h>

int main()
{
    // actual variable declaration
    int var = 20;
    // pointer variable declaration
    int *ip;

    // store address of var in pointer variable
    ip = &var;

    printf("Address of var variable: %p\n", &var);

    // address stored in pointer variable
    printf("Address stored in ip variable: %p\n", ip);

    // access the value using the pointer
    printf("Value of *ip variable: %d\n", *ip);

    return 0;
}