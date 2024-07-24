#include<stdio.h>

int main()
{
    int milhour, milmin, hours;
    char afternoon;

    printf("enter the hours in military time:\n");
    scanf("%d", &milhour);

    printf("enter the minutes in military time: \n");
    scanf("%d", &milmin);

    if (milhour < 12)
    {
        hours = milhour;
        afternoon = 'A';
    }

    if (milhour >= 13)
    {
        hours = milhour - 12;
        afternoon = 'P';
    }

    printf("The time in 12 hour format is: ");
    printf("%d", hours);
    printf(":");
    printf("%d", milmin);
    printf("%c", afternoon);
}