#include "main.h"

/**
 *_strlen_recursion -  Calculates length of a string
 *@s: The string to calculate length of.
 *Return: integer value of tstring length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
