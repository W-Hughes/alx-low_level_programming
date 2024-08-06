#include "lists.h"

/**
 *sum_listint - Returns the sum of all the data (n) in a list.
 *@head: Pointer to the head of the lsit.
 *
 *Return: Sum of all the data of the list, otherwise 0;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
