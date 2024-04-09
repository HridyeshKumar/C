#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    printf("Sum of given numbers is %d \n",a+b+c);
    printf("Average of given numbers is %2f",(float)(a+b+c)/3);
    return 0;
}