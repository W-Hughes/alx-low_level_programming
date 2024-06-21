#include <stdio.h>

/**
 *main - Entry point of code.
 *
 *Description: A function that prints all the letters
 *of the english alphabet.
 *
 *Return: always 0 (success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
