#include<stdio.h>
int main(){
    int n;
    printf("Enter the side of square:");
    scanf("%d",&n);
    //nested loops
    int mid=n/2+1;
    for(int i=1;i<=n;i++) //rows
    {
        for(int j=1;j<=n;j++) //columns
        {
            if(i==mid || j==mid)printf("* ");
            else printf("# ");
        }
        printf("\n");
    }
    return 0;
}
