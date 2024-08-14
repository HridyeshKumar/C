/*
 * C program to read N integers into an array A and
 * a) Find the sum of negative numbers
 * b) Find the sum of positive numbers
 * c) Find the average of all numbers
 * Display the results with suitable headings
 */

#include <stdio.h>

#define MAXSIZE 10

int main()
{
    int array[MAXSIZE];
    int i, num, negative_sum = 0, positive_sum = 0;
    float total = 0.0, average;

    printf("Enter the value of N \n");
    scanf("%d", &num);
    printf("Enter %d numbers (-ve, +ve and zero) \n", num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array elements \n");

    for (i = 0; i < num; i++)
    {
        printf("%+3d\n", array[i]);
    }

    /*  Summation starts */

    for (i = 0; i < num; i++)
    {
        if (array[i] < 0)
        {
            negative_sum = negative_sum + array[i];
        }
        else if (array[i] > 0)
        {
            positive_sum = positive_sum + array[i];
        }
        else if (array[i] == 0)
        { ;
        }

        total = total + array[i];

    }

    average = total / num;
    printf("\n Sum of all negative numbers =  %d\n", negative_sum);
    printf("Sum of all positive numbers =  %d\n", positive_sum);
    printf("\n Average of all input numbers =  %.2f\n", average);

    return 0;
}
