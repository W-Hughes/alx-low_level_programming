#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates array of integer
 *@min: Minimum integer value in the array.
 *@max: Maximum integer value in the array
 *
 *Return: Pointer to created array, otherwise NULL if
 *failure or min > max.
 */

int *array_range(int min, int max)
{
	int *arr;
	int arr_len;
	int i;

	if (min > max)
		return (NULL);

	arr_len = max - min + 1;

	arr = malloc(arr_len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arr_len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
