#include<stdio.h> 

int func(int a, int b)
{
    printf("\n a = %d\n", a);
    printf("\n b = %d\n", b);

    return 0;
}

int main(void)
{
    // Function pointer
    int(*fptr)(int, int);

    // Assign address to function pointer
    fptr = func;

    func(2, 3);
    fptr(2, 3);

    return 0;
}