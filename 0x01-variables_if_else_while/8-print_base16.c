#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that prints all the
 *hexadecimal digits starting from 0;
 *
 *Return: always 0 (successful)
 */

int main(void)
{
	char hexa_digit;

	for (hexa_digit = '0'; hexa_digit <= '9'; hexa_digit++)
	{
		putchar(hexa_digit);
	}

	for (hexa_digit = 'a'; hexa_digit <= 'f'; hexa_digit++)
	{
		putchar(hexa_digit);
	}

	putchar('\n');

	return (0);
}
