#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter the number whose factorial you want to calculate?");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial= %d",f);
}
int fact(int n)
{
int f1;
if (n==0)
{
    return 1;
}
else 
{
    f1=n*fact(n-1);
    return f1;
}
}