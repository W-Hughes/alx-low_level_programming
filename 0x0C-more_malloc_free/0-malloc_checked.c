#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocates memory using malloc.
 *@b: Size of memory to allocate.
 *Return: Pointer to allocated memory, otherwise cause
 *	normal process temrination witha status value 98.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
