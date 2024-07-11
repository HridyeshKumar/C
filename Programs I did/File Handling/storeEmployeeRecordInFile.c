#include<stdio.h>

int main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;

    //add employee record in file
    fptr = fopen("emp_record.txt", "a+");

    printf("Enter the name : ");
    scanf("%s", name);
    fprintf(fptr, "Name    = %s\n", name);
    printf("Enter the age : ");
    scanf("%d", &age);
    fprintf(fptr, "Age     = %d\n", age);
    printf("Enter the salary : ");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  = %.2f\n\n", salary);
    fclose(fptr);

    return 0;
}
