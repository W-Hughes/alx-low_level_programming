#include "main.h"

/**
 * print_binary - Prints the binary of rep of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	(n & 1) ? _putchar('1') : _putchar('0');
}
