#include "lists.h"

/**
 *dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *@h: header pointer to the dlistint_t link.
 *
 * Return: Number of element in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
