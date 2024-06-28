#include "main.h"

/**
 *print_square - Prints a square followed by a new line.
 *@size: The size of the quare.
 */

void print_square(int size)
{
	int length, breadth;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (length = 0; length < size; length++)
		{
			for (breadth = 0; breadth < size; breadth++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
