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
            if(i==1||j==1||i==m||j==n)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
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
            if(i==1||j==1||i==m||j==n)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}