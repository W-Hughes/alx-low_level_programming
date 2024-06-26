#include <stdio.h>

/**
 *main - Entry point of the function.
 *
 *Description: It prints the sum
 *of multiples of 3 or 5 less that 1024.
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
