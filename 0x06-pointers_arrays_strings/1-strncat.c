#include "main.h"

/**
 *_strncat - Concatenates a destination and source string
 *@dest: Destinate string.
 *@src: Source string.
 *@n: Integer value of the upper index of the source string.
 *
 * Return: Concatenated destinated string.;wq
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
