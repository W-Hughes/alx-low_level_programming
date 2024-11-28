#include <stdio.h>

/**
 *ran - Custom random number generator
 *	Returns predefined numbers for the Giga Mill program
 *a simulate a "win"
 *
 * Return: Next number from the set or 0.
 */

int ran(void)
{
	static int count = 0;
	int numbers[] = {9, 8, 10, 24, 75, 9};
	
	return (count < 6) ? (numbers[count++]) : (0);
}
