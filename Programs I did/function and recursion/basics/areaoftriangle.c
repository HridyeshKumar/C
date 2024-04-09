//Printing Right angle triangle with star
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the no. of rows of triangle=");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
}