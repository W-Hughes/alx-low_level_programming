#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - Returns the sum of all its parameters.
 *@n: Number of optional arguments..
 *@...: Optional arguments to summed.
 *
 * Return: sum, otherwise 0 on n == 0;
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}
