#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all possible
 *combinations of doublesd-digit numbers followed by a comma
 *and a white-space.
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	int first;
	int second;

	for (first = '0'; first <= '8'; first++)
	{
		for (second = first + 1; second <= '9'; second++)
		{
			putchar(first);
			putchar(second);

			if (first != '8' || second != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
