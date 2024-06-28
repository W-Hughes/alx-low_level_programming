#include "main.h"

/**
 *print_numbers - prints numbers (from 0 to 9)
 */

void print_numbers(void)
{
	int i = 0;
	int limit = 10;

	while (i < limit)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
