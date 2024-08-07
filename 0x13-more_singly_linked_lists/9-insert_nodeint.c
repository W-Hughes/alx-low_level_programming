#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given position.
 *@head: Pointer to the pointer of the head of the list.
 *@idx: index at which the new new node should be inserted.
 *@n: Integer value of the new node.
 *
 *Return: address of the new node, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;

	while ((i++ < idx - 1) && temp_node)
		temp_node = temp_node->next;


	if (temp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
