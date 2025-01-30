#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array using Binary Search.
 * @array: Pointer to the first element of the array.
 * @left: Left index of the subarray to search.
 * @right: Right index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index of the found value, or -1 if not found.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted
 * array using Exponential Search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the found value, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	left = bound / 2;
	right = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (_binary_search(array, left, right, value));
}
