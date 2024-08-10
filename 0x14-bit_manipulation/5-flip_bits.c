#include "main.h"

/**
 *flip_bits - Counts the number of bits to flip to get from
 *one number from another.
 *@n: The number to get to.
 *@m: The number to get to
 *
 *Return: Number of bits to flip to get from a number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = n ^ m;
	unsigned int count = 0;

	while (c)
	{
		count += c & 1;
		c = c >> 1;
	}
	return (count);
}
