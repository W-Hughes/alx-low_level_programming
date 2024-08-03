#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - Adds a new node at the beginning of
 *a list_t list.
 *@str: String to be copied.
 *@head: Pointer to first node in the list.
 *
 *Return: Address of new element, NULL on failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	int i = 0;

	while (str[i])
		i++;

	if (str != NULL && head != NULL)
	{
		n_node = malloc(sizeof(list_t));
		if (n_node == NULL)
			return (NULL);

		n_node->str = strdup(str);
		n_node->len = i;
		n_node->next = *head;

		*head = n_node;
		return (n_node);
	}

	return (0);

}
