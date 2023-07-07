#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table to retrieve value from
* @key: key to retrieve value for
*
* Return: value associated with the element, or NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);

}
