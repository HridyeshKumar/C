#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    int a=1;
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n+1-i;j++) //columns
        {
            printf("%d ",a);//it can be i also
            a++;
        }
        printf("\n");
    }
    return 0;
}
