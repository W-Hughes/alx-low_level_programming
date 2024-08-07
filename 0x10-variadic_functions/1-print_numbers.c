#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - Prints numbers, followed by a new line.
 *@separator: A string character to be printed between numbers.
 *@n: Number of optional int arguments.
 *@..: Optional list of integer arguments.
 *
 *Return: Numbers, followed by a new line,
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
