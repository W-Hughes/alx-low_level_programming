#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end of a listint_t list.
 *@head: Pointer to the head pointer of the link.
 *@n: The integer argument to add to the node.
 *
 *Return: The address of the new node, otherwise NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	temp_node = *head;
	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
