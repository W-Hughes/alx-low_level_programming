#include "lists.h"

/**
 *free_listint2 - Frees a listint_t list and sets the headto NULL;
 * @head: Pointer to a pointer to the head a linked list.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_h;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_h = *head;
		*head = (*head)->next;
		free(temp_h);
	}

	*head = NULL;
}
