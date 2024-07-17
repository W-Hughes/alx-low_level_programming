#include "main.h"
#include <stdlib.h>

/**
 *_strdup - copies a string parameter.
 *@str: The string to duplicate
 *
 *Return: Pointer to the string, otherwise Null if an empty string, or it fails
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';

	return (s);
}
