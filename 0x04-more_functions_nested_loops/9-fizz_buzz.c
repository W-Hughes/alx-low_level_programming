#include <stdio.h>

/**
 *main - Entry point of the function.
 *
 * Description: This function prints Fizz, Buzz, or FizzBuzz, if
 *number is is multiple of 3, 5, (3 and 5), respectively
 *otherwise it prints the number
 *
 * Return: Always 9 (success)
 */

int main(void)
{
	int number = 1;
	int limit = 100;

	while (number <= limit)
	{
		if ((number % 5) == 0 && (number % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", number);
		}

		if (number != limit)
			putchar(' ');

		number++;
	}

	putchar('\n');
	return (0);
}
