#include "main.h"
#include <stddef.h>

/**
 *_strncpy - Copy a source string to a destination.
 *@dest: The destination string.
 *@src: The source string.
 *@n: The length  substring of source string to print.
 *
 *Description: Copy up to n characters from the string point
 *to by src to the buffer pointed to by dest. If the
 *length of src is less than n, the remainder of dest will
 *be padded with null bytes. If the length of src is
 * greater than or equal to n, no null byte will be appended.
 *
 *Return: The destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
