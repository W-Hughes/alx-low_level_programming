#include "hash_tables.h"

/**
 *key_index - Gives an index of a key.
 *@key: They key to get the index for.
 *@size: The size of the array of the hash table.
 *
 *Return: The index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
