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
	unsigned long int size_hash_t, key_value;
	hash_node_t *node;

	/* Verify the hash table and the key */
	if (ht == NULL || strcmp(key, " ") == 0)
	{
		return (0);
	}

	/* Obtain the key for the hash table */
	size_hash_t = hash_table_size(ht);
	key_value = (key_index((const unsigned char *) key, size_hash_t));

	/* Allocate memory for the node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	/* Put the information in each node */
	node->key = (char *)key;
	node->value = (char *)value;

	/* Is the unique value in that index */
	if (ht->array[key_value] == NULL)
	{
		node->next = NULL;
		ht->array[key_value] = node;
	}
	/* There is one or more nodes in that index */
	else
	{
		node->next = ht->array[key_value];
		ht->array[key_value] = node;
	}

	return (1);
}

/**
* hash_table_size - C - Hash tables
* @hash_t: Hash table
*
* Description: Function to know the length of the hash table
* Return: Length of the hash table. Otherwise EXIT_FAILURE.
*/
unsigned long int hash_table_size(hash_table_t *hash_t)
{
	unsigned long int size;

	if (hash_t == NULL)
	{
		exit(EXIT_FAILURE);
	}
	size = sizeof(hash_t) / sizeof(hash_t[0]);
	return (size);
}
