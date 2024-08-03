#include "lists.h"

/**
 *add_node_end - Adds a new node at the end of a list_t list.
 *@head: Pointer to the head of the list.
 *@str: The string to be duplicated.
 *Return: Address of the new element, otherwise NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *tmp_node;

	if (str != 0)
	{
		n_node = malloc(sizeof(list_t));
		if (n_node == NULL)
			return (NULL);

		n_node->str = strdup(str);
		n_node->len = strlen(str);

		if (*head == NULL)
		{
			*head = n_node;
			return (*head);
		}

		tmp_node = *head;

		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = n_node;

		return (n_node);
	}
	return (0);
}
