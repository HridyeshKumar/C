#include <stdio.h>

//main method declaration
int main()
{
    //variable declaration
    int i, j, n, m;

    //take user input for rows and columns
    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("\nEnter a number of columns : ");
    scanf("%d", &m);
    printf("\n");
    //iterate over each row
    for (i = 1; i <= n; i++)
    {
        //iterate over columns of each rows
        for (j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
