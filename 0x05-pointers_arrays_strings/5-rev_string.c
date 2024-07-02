#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temporary;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temporary = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temporary;
	}
}
