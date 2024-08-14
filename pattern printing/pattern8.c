/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>

int main()
{
    int n = 0, i, j;
    printf("Enter number of lines for pattern : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
