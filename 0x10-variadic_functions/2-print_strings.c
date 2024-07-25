#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - Prints strings, followed by new line.
 *@separator: A string argument to be printed between strings.
 *@n: Number of optional argument to be passed.
 *@...: Optional string arguments.
 *
 * Return: No return value.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *temp;

	va_start(args, n);

	while (i < n)
	{
		temp = va_arg(args, char *);
		(temp == NULL) ?
			printf("(nil)") : printf("%s", temp);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);

		i++;
	}
	printf("\n");
}
