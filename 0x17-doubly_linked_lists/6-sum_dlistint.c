#include "lists.h"

/**
 *sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list
 *@head: Pointer to the head of the list.
 *
 *Return: Sums of all the data (n), otherwise 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
