#include "lists.h"

/**
 *reverse_listint - Reverses a listint_t linked list.
 *@head: Pointer to the pointer to the head of the list.
 *
 *Return: pointer to the first node of the reverse list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = next_node;
	}

	*head = pre_node;
	return (*head);
}
