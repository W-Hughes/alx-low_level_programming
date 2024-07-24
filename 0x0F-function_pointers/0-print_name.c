#include "function_pointers.h"

/**
 *print_name - Prints a name.
 *@name: String argumument to be printed.
 *@f: Function pointer that takes char pointer argument.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
