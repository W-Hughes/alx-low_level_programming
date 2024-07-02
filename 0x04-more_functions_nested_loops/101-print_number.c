#include "main.h"
#include <limits.h>

/**
 *print_number - Prints an integer.
 *@n: The integer to print.
 */

void print_number(int n)
{
	int powerOfTen = 1;	/* Holds power of ten */

	if (n == INT_MIN)
	{
		_putchar('-');
		n = -(n + 1);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Set a powerOfTen equal to the largest place value of the number */
	while ((n / (powerOfTen * 10)) > 0)
	{
		powerOfTen *= 10;
	}

	/* Print each digit from the greatest place value to the least.*/
	while (powerOfTen > 0)
	{
		_putchar((n / powerOfTen) % 10 + '0');
		powerOfTen /= 10;
	}
}
