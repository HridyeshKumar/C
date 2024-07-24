#include <stdio.h>

//declaration of main
int main()
{
    int i, j, n;

    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("\n");
    //iterate over each row
    for (i = 1; i <= n; i++)
    {
        //print columns of each row
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
