#include "main.h"

/**
 *_puts_recursion - Prints string followed by a new line
 *@s: The string to print
 *
 * Rturn: No return value.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
