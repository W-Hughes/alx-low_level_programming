#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (!list)
		return (NULL);

	current = list;
	prev = NULL;
	/* Traverse the express lane first */
	while (current->express && current->express->n < value)
	{
		prev = current;
		current = current->express;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	/* Determine the search range */
	if (current->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->express->index, current->express->n);
		prev = current;
		current = current->express;
	}
	else
	{
		/* If no express lane left, go till the last node */
		prev = current;
		while (current->next)
			current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	/* Perform linear search within the identified range */
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
