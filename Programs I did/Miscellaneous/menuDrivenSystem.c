#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice, num, i;
    unsigned long int fact;

    while (1)
    {
        printf("1.Factorial\n");
        printf("2.Prime\n");
        printf("3.Odd/Even\n");
        printf("4.Exit\n");
        printf("\nYour choice?");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter number:");
                scanf("%d", &num);
                fact = 1;
                for (i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }
                printf("\nFactorial value=%lu\n", fact);
                break; // Takes control out of switch
            case 2:
                printf("\nEnter number:");
                scanf("%d", &num);

                for (i = 2; i < num; i++)
                {
                    if (num % i == 0)
                    {
                        printf("\nNot a prime number.\n");
                        break; //Takes control out of for loop
                    }
                }

                if (i == num)
                {
                    printf("\nPrime number.\n");
                }

                break; //Takes control out of switch
            case 3:
                printf("\nEnter number:");
                scanf("%d", &num);

                if (num % 2 == 0)
                {
                    printf("\nEven number.\n");
                }
                else
                {
                    printf("\nOdd number.\n");
                }
                break; //Takes control out of switch
            case 4:
                exit(0); //Terminates program execution
        }
    }
    return 0;
}