#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array of chars, and initializes
 *it with specific char.
 *@size: the size of the array.
 *@c: the specific char to initial the array with.
 *
 * Return: Pointer to the array, or Null if it fails or size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
