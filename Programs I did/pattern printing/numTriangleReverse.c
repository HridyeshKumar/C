#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) //outer
    {
        for(int j=1;j<=n-i;j++) //spaces
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++) //columns
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

