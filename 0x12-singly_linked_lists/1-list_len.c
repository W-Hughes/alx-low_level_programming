#include "lists.h"

/**
 * list_len - REturns the number of elements in a linked list.
 * @h: head of the list.
 * Return: Number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t node_counter;

	node_counter = 0;
	while (h)
	{
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
