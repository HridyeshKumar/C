#include<stdio.h>
int main()
{
    int m;
    printf("Enter the no. of rows:");
    scanf("%d",&m);
    int n;
    printf("Enter the no. of columns:");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=m;i++) //rows
    {
        for(int j=1;j<=n;j++) //columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
