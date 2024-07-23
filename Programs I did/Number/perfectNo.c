#include <stdio.h>

int main()
{
	//The first perfect number is 6, because 1, 2, and 3
	//are its proper positive divisors, and 1 + 2 + 3 = 6.

	int n, i = 1, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (i < n)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}

	if (sum == n)
	{
		printf("%d is a perfect number", i);
	}
	else
	{
		printf("%d is not a perfect number", i);
	}
  
	return 0;
}