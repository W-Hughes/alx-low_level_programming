#include "main.h"
#include <string.h>

/**
 *_memset - Fills memory with a constant byte.
 *@s: memory area to fill.
 *@b: constant byte to fill.
 *@n: bytes of memory area to fill.
 *
 *Return: the pointer to memory filled.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
