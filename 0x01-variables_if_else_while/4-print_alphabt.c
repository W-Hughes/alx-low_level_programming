#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints the all the letters of the
 *alphabet but q and e in lowercase.
 *
 *Return: always 0 (successful)
 *
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}

		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
