#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all possible
 *combinations of single-digit numbers followed by a comma
 *and a white-space.
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);

		if (digit < '9')
		{
			putchar(',');
			putchar(' ');
		}


	}

	putchar('\n');

	return (0);
}
