#include "main.h"
#include <string.h>

/**
 *_memcpy - Copies n bytes from a source
 *memory area to a destination.
 *@dest:  destination memory area to compy to.
 *@src: Source are to copy from.
 *@n: Bytes of memory area pointed to.
 *
 * Return: pointer to the destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
