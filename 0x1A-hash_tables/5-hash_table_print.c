#include "hash_tables.h"

/**
* hash_table_print - C - Hash tables
* @ht: Hash table
*
* Description: function that prints a hash table.
* In the order array, list.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *actual_node;

	if (ht == NULL)
	{
		return;
	}

	actual_node = malloc(sizeof(hash_node_t));
	if (actual_node == NULL)
	{
		return;
	}

	printf("%s", "{");
	/* Traverse the hash table*/
	for (i = 0; i < ht->size; i++)
	{
		actual_node = ht->array[i];
		while (actual_node != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (actual_node != NULL)
			{
				actual_node = actual_node->next;
				if (i < (ht->size - 2) && actual_node != NULL)
				{
					printf("%s", ", ");
				}
			}

		}
	}

	printf("%s", "}\n");
}
