#include "hash_tables.h"

/**
* hash_table_create - creates a new hash table with the specified size
* @size: size of the hash table
*
* Return: a pointer to the newly created hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	table->array = malloc(size * sizeof(hash_node_t *));

	if (!table)
	{
		return (NULL);
	}

	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;

	}
	return (table);
}

