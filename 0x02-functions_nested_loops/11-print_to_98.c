#include "main.h"

/**
 *print_to_98 - Prints all the natural numbers n to 98
 *
 *@n: starting integer
 *
 */
static void print_number(int n);

void print_to_98(int n)
{
	int limit = 98;

	while (n != limit)
	{
		print_number(n);
		_putchar(',');
		_putchar(' ');

		if (n < limit)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	print_number(limit);
	_putchar('\n');
}

/**
 *print_number - prints an integer ussing_putchar
 *@n: the integer to print;
 *
 *
 *
 */

static void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
