#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: the Charactoer to check
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

