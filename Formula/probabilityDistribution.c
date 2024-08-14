#include <stdio.h>
#include <math.h>

#define MAXSIZE 100

int main()
{
    //variable declaration
    float nuArr[MAXSIZE];
    int i, size;
    float mean, sum = 0;
    double variance,sum1 = 0,standardDeviation;

    //take user input
    printf("Enter how many numbers you want to calculate : ");
    scanf("%d", &size);

    //take input for numbers
    printf("Enter %d distinct numbers \n", size);


    for (i = 0; i < size; i++)
    {
        scanf("%f", &nuArr[i]);
    }

    //calculate the mean of all elements
    for (i = 0; i < size; i++)
    {
        sum = sum + nuArr[i];
    }

    mean = sum / (float) size;

    //calculate variance  and standard deviation  */
    for (i = 0; i < size; i++)
    {
        sum1 = sum1 + pow((nuArr[i] - mean), 2);
    }

    variance = sum1 / (float) size;


    standardDeviation = sqrt(variance);

    //display Mean standard deviation and variance of all elements
    printf("Mean of all elements :  %.2f\n", mean);
    printf("variance of all elements  : %.2f\n", variance);
    printf("Standard deviation : %.2f\n", standardDeviation);

    return 0;
}
