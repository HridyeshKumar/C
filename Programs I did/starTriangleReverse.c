#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //method 1
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n;j++) //columns
        {
            if((i+j)>=n+1)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    // method 2
    for(int i=1;i<=n;i++) //outer
    {
        for(int j=1;j<=n-i;j++) //spaces
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++) //columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

