#include "lists.h"

/**
 *listint_len - Returns the number of elements in a linked listint_t list.
 *@h: The head of the list.
 *
 *Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		h = h->next;
		node_counter++;
	}

	return (node_counter);
}
