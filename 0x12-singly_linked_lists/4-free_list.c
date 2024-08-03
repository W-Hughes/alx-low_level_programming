#include "lists.h"

/**
 *free_list - Frees a list_t list.
 *@head: Pointer to the first node of a linked list.
 *Return: void.
 */

void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node->str);
		free(tmp_node);
	}

}
