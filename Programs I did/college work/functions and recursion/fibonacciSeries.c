#include<stdio.h>
int main()
{
    int i,n;
    //initialize first and second terms
    int t1=0; int t2=1;
    //initialize the 3rd term
    int t3=1+t2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series:%d %d ",t1,t2);
    for(i=3;i<=n;++i){
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    return 0;
}