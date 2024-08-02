#include "lists.h"

/**
 *print_list - Prints all elements of a list_t list.
 *@h: Pointer to the list.
 *Return: Number of nodes, otherwise print [0] (nill)
 *if str is NULL (0).
 */

size_t print_list(const list_t *h)
{
	size_t node_counter;

	node_counter = 0;

	while (h)
	{
		(h->str == NULL) ? printf("[0] (nil)\n")
			: printf("[%u] %s\n", h->len, h->str);

		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
