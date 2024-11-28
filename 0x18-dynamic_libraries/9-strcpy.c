#include "main.h"

/**
 *_strcpy - Copies the string from on pointer to another,
 *including the (\0);
 *@src: The string to be copied.
 *@dest: The variable to be copied to.
 *
 * Return: A string copy of the argument.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
