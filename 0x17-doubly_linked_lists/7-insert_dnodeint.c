#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added, starting from 0.
 * @n: The integer value for the new node.
 *
 * Return: Address of the new node, or NULL if it
 * failed or index is out of bounds.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL && count < idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current ? current->next : NULL;
	new_node->prev = current;
	if (current)
	{
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}
