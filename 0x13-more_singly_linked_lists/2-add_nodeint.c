#include "lists.h"

/**
 *add_nodeint - Adds a new node the beginning of a lined list.
 *@head: Pointer to the head pointer.
 *@n: The value to be added to the new node
 *
 * Return: Address of the new node on success, otherwise NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}

	return (NULL);
}
