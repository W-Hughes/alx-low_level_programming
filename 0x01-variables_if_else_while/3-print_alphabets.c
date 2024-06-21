#include <stdio.h>

/**
 *main - Entry point of the code.
 *
 *Description: A function that loops through the letters of the
 *alphabet and prints a single string of all lowercase letters,
 *uppercase letters and the newline character.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
