#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n;j++) //columns
        {
            if(i==j || i+j==n+1)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}