#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table to add element to
* @key: key to add
* @value: value to add
*
* Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	unsigned long int i = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = (char *)value;
			return (1);

		}

	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
