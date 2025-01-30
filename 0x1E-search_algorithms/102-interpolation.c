#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position, high = size - 1, low = 0;

	if (array == NULL || size == 0)
		return (-1);
	/* Return -1 if array is NULL or empty */
	if (array[high] == array[low])
	{
		if (array[low] == value)
			return (low);
		return (-1);
	}
	position = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (position >= size)
	{
		printf("Value checked array[%lu] is out of range\n", position);
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{

		printf("Value checked array[%lu] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
		position = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (position >= size)
		{
			printf("Value checked array[%lu] is out of range\n", position);
			return (-1);
		}
	}
	if (value < array[low] || value > array[high])
		printf("Value checked array[%lu] is out of range\n", position);

	return (-1);
}
