#include "function_pointers.h"

/**
 *int_index - Searches for an integer in an array argument.
 *@array: Array to search in.
 *@size: size of the array.
 *@cmp: Pointer to the function that compares.
 *
 *Return: index of integer on success, otherwise -1
 *      if size of array is negative int or no match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

		return (-1);
	}
		return (-1);
}
