#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n+1-i;j++) //columns
        {
            if(i%2==0)
            printf("%d ",j);//it can be i also
            else
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
