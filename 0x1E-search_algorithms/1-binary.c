#include "search_algos.h"

/**
 *binary_search - Searches for a value in a sorted array of integers
 *using binary search algorithm.
 *@array: Pointer to the first element of the array to search in.
 *@size: the number of elemeents in the array.
 *@value: The value to be searched for.
 *
 *Return: THe index of the index if value is found, otherwise -1
 *if array is NULL or value is not present in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		mid = start + (end - start) / 2;


		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}
