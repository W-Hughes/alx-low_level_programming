#include "main.h"
#include <string.h>

/**
 *_strpbrk - Checks for first occurence of bytes in a string
 *@s: The string to check through.
 *@accept: The accepting string.
 *
 * Return: A pointer to the byte matching byte, otherwise return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i = 0;

		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		s++;
	}

	return (NULL);
}
