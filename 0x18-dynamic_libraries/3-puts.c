#include "main.h"

/**
 *_puts - Prints a string followed by a newling to the stdout.
 *@s: Point to the string.
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
