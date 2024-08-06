#include "lists.h"

/**
 *delete_nodeint_at_index - Deletes the node at a given index.
 *@head: Pointer to a pointer to the head of a linked list.
 *@index: Index of the node to be deleted;
 *
 *Return: 1 on success, otherwise -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	listint_t *node_tbd;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		node_tbd = *head;
		*head = (*head)->next;
		free(node_tbd);
		return (1);
	}

	temp_node = *head;

	while (temp_node && i++ < index - 1)
		temp_node = temp_node->next;

	if (!temp_node || !(temp_node->next))
		return (-1);

	node_tbd = temp_node->next;
	temp_node->next = temp_node->next->next;
	free(node_tbd);

	return (1);
}
