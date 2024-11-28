#include "main.h"
#include <string.h>

/**
 *_strspn - Gets the length of a prefix substring.
 *@s: String to match.
 *@accept: Accept string
 *
 *Return: Number of byte in the intial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	int b = 0;

	while (*s != ' ')
	{
		int i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
				b++;
			i++;
		}

		s++;
	}

	return (b);
}
