#include "lists.h"

/**
 *pop_listint - Deletes the head of the list and return the data.
 *@head: Pointer to the pointer to the head of a linked list.
 *
 * Return: The data of the deleted node, otherwise 0 on empty list.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int n;

	if (*head != NULL)
	{
		temp_node = *head;

		n = temp_node->n;
		*head = (*head)->next;
		free(temp_node);
		return (n);
	}

	return (0);
}
