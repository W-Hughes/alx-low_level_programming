#include "lists.h"

/**
 *free_dlistint - Frees a dlistint)_t list.
 *@head: pointer to the head of the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
