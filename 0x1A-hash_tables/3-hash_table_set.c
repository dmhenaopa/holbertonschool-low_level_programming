#include "hash_tables.h"

/**
* hash_table_set - C - Hash tables
* @ht: hash table
* @key: key of hash table values
* @value: value associated with the key
*
* Description: function that adds an element to the hash table.
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_value;
	hash_node_t *node, *actual_node;

	if (ht == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	/* Obtain the index for the hash table */
	key_value = (key_index((const unsigned char *) key, ht->size));
	/* Allocate memory for the node and put info in each node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	actual_node = ht->array[key_value];
	/* Is the unique value in that index */
	if (ht->array[key_value] == NULL)
	{
		node->next = NULL;
		ht->array[key_value] = node;
	}
	else
	{
		/* Traverse the linked list to found if the key exists */
		while (actual_node != NULL && actual_node->next != NULL)
		{
			/* Compare if the key exists in the linked list */
			if (strcmp(key, actual_node->key) == 0)
				actual_node->value = (char *)value;
			else
				actual_node = actual_node->next;
		}
		/* If the key doesn't exist in the linked list */
		if (strcmp(key, actual_node->key) != 0)
		{
			node->next = ht->array[key_value];
			ht->array[key_value] = node;
		}
	}
	return (1);
}
