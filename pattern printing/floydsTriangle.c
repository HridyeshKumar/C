/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28
*/

#include <stdio.h>

int main() {

    int n, i, c, a = 1;

    printf("Enter the number of rows of Floyd's triangle to print\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (c = 1; c <= i; c++) {

            printf("%d ", a);
            a++;

        }

        printf("\n");
    }

    return 0;
}