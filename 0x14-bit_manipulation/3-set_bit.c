#include "main.h"

/**
 *set_bit - Sets the value of a bit to 1 at a given index.
 *@index: index starting from 0.
 *@n: Pointeer to the number to modify.
 * Return: 1 on success, otherwise -1.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
