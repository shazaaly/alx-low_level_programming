#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - prints a hash table
* @ht: hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	unsigned char flag = 0;

	if (!ht)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s' : '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			flag = 1;

		}
	}
	printf("}\n");

}