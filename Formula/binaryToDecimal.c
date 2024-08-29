#include <stdio.h>
#include <math.h>

int binary_decimal(int n);
int main(){
    int n;
    char c;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, binary_decimal(n));
    return 0;
}
//Function to convert binary to decimal.
int binary_decimal(int n){
    int decimal = 0, i = 0, rem;
    while (n != 0){
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}
