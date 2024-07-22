#include <stdio.h>

int power(int n1,int n2);

int main()
{
    int base, exp;
    
    printf("Enter base number: ");
    scanf("%d",&base);
    
    printf("Enter power number(positive integer): ");
    scanf("%d",&exp);
    
    printf("%d^%d = %d", base, exp, power(base, exp));
    return 0;
}
int power(int base,int exp)
{
    if ( exp!=1 )
        return (base*power(base,exp-1));
}
