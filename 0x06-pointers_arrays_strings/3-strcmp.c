#include "main.h"

/**
 *_strcmp - Compares two strings.
 *@s1: first string,
 *@s2: second string.
 *
 * Return: Am integer value equal to the difference
 * of first string,and second string.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
