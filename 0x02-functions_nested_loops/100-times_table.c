#include "main.h"

/**
 *print_times_table - Prints a multiplication table up to
 *an argument given.
 *
 *@n: The number to find products
 *
 */

void print_times_table(int n)
{
	int j, i, product;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
}
