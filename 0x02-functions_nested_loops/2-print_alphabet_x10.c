#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the
 *alphabet in lowercase, followed by new line.
 *
 *
 * Return: 1 (success)
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int i = 0;

	while (i < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
