#include "main.h"
/**
 *print_most_numbers - Print all integers from 0 to 9, except 2 and 4.
 */
void print_most_numbers(void)
{
	int i = 0;
	int limit = 10;

	while (i < limit)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}

		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
