#include "lists.h"

/**
 *print_listint - Prints all the elements of listint_t list
 *@h: Head pointer to a node list
 *
 *Return: Number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
