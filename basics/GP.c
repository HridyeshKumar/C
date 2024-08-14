#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter the common ratio of GP:");
    scanf("%d",&r);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*r;
    }
}