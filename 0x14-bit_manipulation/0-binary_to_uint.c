#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i = 0, p = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
		i++;

	i--;

	while (i >= 0)
	{
		if (b[i] == '0')
		{
			p++;
		}
		else if (b[i] == '1')
		{
			r += (1 << p);
			p++;
		}
		else
		{
			return (0);
		}
		i--;
	}

	return (r);
}
