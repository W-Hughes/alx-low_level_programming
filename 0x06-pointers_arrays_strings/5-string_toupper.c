#include "main.h"

/**
 *string_toupper - Converts lowercase letters in a string to upper.
 * @ptr: string to be converted.
 *
 * Return: Pointer to the modified string.
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= 32;
		}

		i++;
	}

	return (ptr);
}
