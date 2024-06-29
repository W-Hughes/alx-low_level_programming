#include "main.h"

/**
 *print_triangle - Prints a triangle, followed by a new line.
 *@size: The size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}