#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all possible
 *combinations of two-digit numbers followed by a comma
 *and a white-space.
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 99; first++)
	{
		for (second = first + 1; second <= 99; second++)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((second / 10) + '0');
			putchar((second % 10) + '0');

			if (first != 98 || second != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
