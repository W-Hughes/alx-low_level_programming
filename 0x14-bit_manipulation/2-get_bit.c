#include "main.h"

/**
 *get_bit - Returns the value of a bit at a given index.
 *@n: number
 *@index: OF the number starting from zero bite.
 *
 *Return: Value of bit at the given index argument.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	return ((n >> index) & 1);
}
