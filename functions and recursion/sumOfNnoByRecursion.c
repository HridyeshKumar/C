#include<stdio.h>

int main()
{

    int n,sum;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    sum = getSum(n);

    printf("Sum of n numbers: %d",sum);

    return 0;
}

int getSum(n)
{

    static int sum=0;

    if(n>0)
    {
        sum = sum + n;
        getSum(n-1);
    }

    return sum;
}
