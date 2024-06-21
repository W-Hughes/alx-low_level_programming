#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all the digits starting from 0;
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');

	return (0);

}
