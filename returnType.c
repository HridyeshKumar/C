#include<stdio.h>
int min(int x,int y){
    if(x<y) return x;
    else return y;
}
int main()
{
    int a;
    printf("Enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number:");
    scanf("%d",&b);
    int m=min(a,b);
    printf("Minimum of %d and %d is %d",a,b,m);
    return 0;
}