#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all possible
 *combinations of three-digit numbers followed by a comma
 *and a white-space.
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	int first;
	int second;
	int third;

	for (first = '0'; first <= '7'; first++)
	{
		for (second = first + 1; second <= '8'; second++)
		{
			for (third = second + 1; third <= '9'; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first != '7' || second != '8' || third != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
