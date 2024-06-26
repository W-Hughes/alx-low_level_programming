#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase, followed by a new line;
 *
 *Return: Always 0 (success).
 */
void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
