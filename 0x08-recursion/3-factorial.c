#include "main.h"

/**
 *factorial - Calculates the factorial of an in argumane.
 *@n: The integer to calculate factorial of.
 *
 * Return: The factorial of an integer argument, otherwise -1.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
