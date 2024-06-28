#include "main.h"

/**
 *print_line - Draws a straight line in the terminal.
 *@n: the number of time the character _ is printed.
 */

void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
