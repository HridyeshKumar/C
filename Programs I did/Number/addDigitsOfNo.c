#include <stdio.h>

int main()
 {
	int n, sum = 0, remainder;

	printf("Enter an integer\n");
	scanf("%d", &n);

	while (n != 0) 
	{
		remainder = n % 10;
		sum = sum + remainder;
		n = n / 10;
	}

	printf("Sum of digits of entered number = %d\n", sum);

	return 0;
}