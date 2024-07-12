#include "main.h"

/**
 *is_palindrome - Checks if a string is palindrome.
 *@s: Pointer to the sting to check.
 *
 * Return: 1 if palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);

	len = _strlen_recursion(s) - 1;

	return (check_palindrome(s, 0, len));
}

/**
 *check_palindrome - Helper function to check if a
 *string is palindrome.
 *@s: Pointer to the sting to check.
 *@start: Integer value that is the start index of string.
 *@end: Integer value that is the end index of the string argument.
 *
 * Return: 1 if palindrome, otherwise 0.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}
/**
 *_strlen_recursion - Calculates the length of a string.
 *@s: Pointer to the sting to check.
 *
 * Return: integer value, the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
