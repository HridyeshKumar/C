#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++) //outer
    {
        for(int j=1;j<=nsp;j++) //spaces
        {
            printf("  ");
        }
        for(int j=1;j<=nst;j++) //columns
        {
            printf("* ");
        }
        nsp--;
        nst+=2;
        printf("\n ");
    }
    return 0;
}


