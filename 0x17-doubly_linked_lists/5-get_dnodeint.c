#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *@head: Pointer to the head of the linked list.
 *@index: The index of the node to return, starting from 0
 *
 *Return: Pointer to the nth node, otherwise NULL if it doesn't exit.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
