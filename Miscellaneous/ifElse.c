#include <stdio.h>

int main()
{
	int number;

	printf("Please enter a number: ");
	scanf("%d", &number);

	if (number < 100)
	{
		printf("\nNumber is less than 100!");
	}
	else if (number == 100)
	{
		printf("\nNumber is 100!");
	}
	else
	{
		printf("\nNumber is greater than 100!");
    }

	return 0;
}