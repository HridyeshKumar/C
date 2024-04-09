#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=n;i++) //rows
    {
        int a=1;
        for(int j=1;j<=n;j++) //columns
        {
            printf("%d ",a);//it can be j also
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}