#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *@size: size of the array.
 *
 * Return: A pointer to the newly created hash table, otherwise
 * 0 on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
