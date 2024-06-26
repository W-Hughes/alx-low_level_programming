#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _isalpha(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0);
}
