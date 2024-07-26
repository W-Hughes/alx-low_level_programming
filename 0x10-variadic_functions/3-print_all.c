#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - Prints anything.
 *@format: A list of type of input arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int valid_format = 0;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
		{
			if (valid_format)
				printf(", ");
			valid_format = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
				break;
				case 'i':
					printf("%d", va_arg(args, int));
				break;
				case 'f':
					printf("%f", va_arg(args, double));
				break;
				case 's':
					s = va_arg(args, char *);
					printf("%s", s ? s : "(nil)");
				break;
				default:
				break;
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
