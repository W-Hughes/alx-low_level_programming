#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

