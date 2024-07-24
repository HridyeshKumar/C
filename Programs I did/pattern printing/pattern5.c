/*

*****
****
***
**
*

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of rows ");
    scanf("%d", &n);
    printf("\n");
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}