#include "main.h"

/**
 *clear_bit - Sets the value of a bit at a given index argument to 0.
 *@n: number
 *@index: index starting from 0.
 *
 *Return: 1 if success, otherwise -1.
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
