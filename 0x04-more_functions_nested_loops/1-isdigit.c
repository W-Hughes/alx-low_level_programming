#include "main.h"

/**
 *_isdigit - Checks if a character is a digit (0 through 9)
 *@c: the character to be checked.
 *
 *Return: 1 if character is digit, otherwise return 0.
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
