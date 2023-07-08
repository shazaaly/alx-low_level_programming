#include "hash_tables.h"
/**
* hash_table_delete - Deletes a hash table
* @ht: Pointer to the hash table
*
* Description: Frees the memory used by a hash table and its nodes.
* Each node in the hash table is traversed and freed individually.
* Finally, the memory allocated for the hash table itself is freed.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *next;
	hash_table_t *head = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				tmp = ht->array[i];
				while (tmp)
				{
					next = tmp->next;
				free(tmp->key);
				free(tmp->value);
				tmp = next;

				}


			}

		}

	}
	free(head->array);
	free(head);

}
