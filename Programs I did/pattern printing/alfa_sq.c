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
            printf("%c ",i+64);//it can be j also
        }
        printf("\n");
    }
    return 0;
}