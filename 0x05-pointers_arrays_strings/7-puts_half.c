#include "main.h"

/**
 *puts_half - prints the half a string followed by a new line.
 *@str: The string to print.
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int l = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		l = i / 2;
	}
	else
	{
		l = (i - 1) / 2;
		l += 1;
	}

	while (l < i)
	{
		_putchar(str[l]);
		l++;
	}

	_putchar('\n');

}
