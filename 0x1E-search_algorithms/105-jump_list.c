#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted
 * list of integers using Jump Search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where
 * value is located, or NULL if not found.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	step = (size_t)sqrt((double)size);
	current = list;
	prev = NULL;

	/* Jump ahead in steps */
	while (current->next != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && current->next != NULL; i++)
		{
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	/* Ensure prev is valid */
	if (prev == NULL)
		prev = list;

	/* Determine the range for linear search */
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	/* Perform linear search */
	while (prev != NULL && prev->index <= current->index && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
