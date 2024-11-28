#include "main.h"

/**
 *_isupper - Checks if a letter is upper.
 *@c: the character to be checked.
 *
 *Return: 1 if character is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
