#include <stdio.h>

int main() {
    int n, array[1000], c, d, t;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }
    for (c = 1; c < n; c++) {
        t = array[c];
        d = c - 1;
        while (d >= 0 && array[d] > t) {
            array[d + 1] = array[d];
            d--;
        }
        array[d + 1] = t; 
    }
    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++) {
        printf("%d\n", array[c]);
    }
    return 0;
}
