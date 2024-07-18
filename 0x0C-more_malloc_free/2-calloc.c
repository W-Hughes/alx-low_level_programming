#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocates memory for an array using malloc.
 *@nmemb: Number of elements in the array.
 *@size: Size of the element in bytes
 *
 *Return: Pointer to allocated memory, otherwise
 *	NULL if nmemb or size equals zero,or malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int arr_size;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr_size = nmemb * size;

	ptr = malloc(arr_size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < arr_size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
