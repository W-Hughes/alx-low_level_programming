#include "lists.h"

/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *@index: index of the node to return.
 *@head: Pointer to the head of the list.
 *
 *Return: Pointer to the nth node of the list,
 *	otherwise NULL if node does not exit.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_counter = 0;

	while (head)
	{
		if (index == node_counter)
			return (head);
		head = head->next;
		node_counter++;
	}
	return (NULL);
}
