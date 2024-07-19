#include "main.h"
#include <stdlib.h>

/**
 *_realloc - Reallocates memory using malloc and free.
 *@ptr: Pointer to memory previously allocated with malloc
 *@old_size: size in bytes of memory space for ptr.
 *@new_size: size in bytes of new memory
 *
 * Return: Pointer to new allocated memory, NULl if new_size
 * is 0 and ptr != NULL or malloc fail.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	unsigned int min_len;
	char *src;
	char *dest;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	min_len = (new_size > old_size) ? old_size : new_size;
	src = (char *)ptr;
	dest = (char *)new_ptr;
	for (i = 0; i < min_len; i++)
		dest[i] = src[i];
	free(ptr);

	return (new_ptr);

}
