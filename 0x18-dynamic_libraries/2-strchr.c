#include "main.h"
#include <string.h>

/**
 *_strchr - Checks the occurence of a character in a string
 *@s: String to check through
 *@c: The character to check occurence of.
 *
 *Return: Pointer to first occurence of the character
 * c in the string, otherwise NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
