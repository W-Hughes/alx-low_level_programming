#include "lists.h"

/**
 *free_listint - Frees a listint_t list;
 * @head: pointer to the head a linked list.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp_h;

	while (head)
	{
		temp_h = head;
		head = head->next;
		free(temp_h);
	}
}
