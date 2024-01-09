#include<stdio.h>
int main()
{
    int r;
    printf("Enter the temperature in celcius:");
    scanf("%d",&r);
    printf("Temperature in Fahrenheit is %d",(((9*r)/5)+32));
    return 0;
}