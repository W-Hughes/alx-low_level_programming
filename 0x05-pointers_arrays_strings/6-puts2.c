#include "main.h"

/**
 *puts2 - Prints the first character and every
 *other character in the string.
 *@str: the pointer of the string to print
 *
 *
 */

void puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	while (i < l)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');


}
