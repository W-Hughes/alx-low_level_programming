#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatnate two strings.
 *@s1: First string argument.
 *@s2: Second string argument.
 *
 *Return: Pointer to a newly allocated memory space hosting
 *	the concat strings, otherwise return NULL on failure or if
 *	a NULL string argument is passes, assign empty string.
 */

char *str_concat(char *s1, char *s2)
{
	int ls1 = 0;
	int ls2 = 0;
	int i;
	int j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ls1])
		ls1++;

	while (s2[ls2])
		ls2++;

	s = malloc((ls1 + ls2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ls1; i++)
		s[i] = s1[i];

	for (j = 0; j < ls2; j++)
		s[ls1 + j] = s2[j];

	s[ls1 + ls2] = '\0';

	return (s);
}
