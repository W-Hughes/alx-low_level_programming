#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index of the found value, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, next, original_next;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;
	next = step;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (next < size && array[next] < value)
	{
		prev = next;
		next += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	original_next = next;

	if (next >= size)
		next = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", prev, original_next);
	while (prev <= next)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
