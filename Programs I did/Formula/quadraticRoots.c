#include <stdio.h>
#include <math.h>

int main()
{
    //variable declaration
    float a, b, c, determinant, realpart;
    double root1, root2, imaginarypart;

    //take user input
    printf("Enter coefficients of a, b and c : ");
    scanf("%f%f%f", &a, &b, &c);
    determinant = b * b - 4 * a * c;

    //if -else checking to find roots of quadratic equation
    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Roots are : %.2f and %.2f", root1, root2);
    }
    else if (determinant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are : %.2f and %.2f", root1, root2);
    }
    else
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-determinant) / (2 * a);
        printf("Roots are : %.2f+%.2fi and %.2f-%.2fi", realpart, imaginarypart, realpart, imaginarypart);
    }

    return 0;
}