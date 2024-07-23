#include<stdio.h>

int main()
{
    int n, count;
    float sum = 0, x, avg;
    printf("\nEnter How Many Numbers : ");
    scanf("%d", &n);
    for (count = 1; count <= n; count++)
    {
        printf("x = ");
        scanf("%f", &x);
        sum += x;
    }
    avg = sum / n;
    printf("\nThe Average of Numbers is : %0.2f", avg);
    
    return 0;
}