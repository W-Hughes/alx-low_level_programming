#include "main.h"
#include <limits.h>

/**
 *print_number - Prints an integer value.
 *@n: Integer value to print.
 */

void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
