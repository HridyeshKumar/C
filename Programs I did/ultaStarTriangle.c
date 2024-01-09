#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n+1-i;j++) //columns
        { //i+j=n+1
            printf("* ",i+j);
        }
        printf("\n");
    }
    return 0;
}

