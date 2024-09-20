#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - Prints all elements of a dlistint_t list.
 *@h: Head ointer to the first node of the dlistint_t list.
 *
 * Return: number of node;
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
