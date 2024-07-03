#include "main.h"

/**
 *_strcat - Concatenate two strings.
 *@dest: Destinateion string.
 *@src: Source string.
 *
 * Return: Concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
