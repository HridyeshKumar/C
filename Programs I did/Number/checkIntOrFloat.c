#include<stdio.h>
#include<string.h>

int main()
{
    char number[10];
    int flag = 0;
    int length;
    printf("Enter a number : ");
    scanf("%s", number);
    length = strlen(number);
    while (length--)
    {
        if (number[length] == '.')
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Entered Number is Float Number\n");
    else
        printf("Entered Number is Integer\n");

    return 0;
}
