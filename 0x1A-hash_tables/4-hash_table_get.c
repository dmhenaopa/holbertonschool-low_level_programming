#include "hash_tables.h"

/**
* hash_table_get - C - Hash tables
* @ht: Hash table
* @key: The key to search in the hash table
*
* Description: A function that retrieves a value associated with a key.
* Return: the value associated with the element,
* or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_value;

	if (ht == NULL)
	{
		return (NULL);
	}

	/* Obtain the index where we need to find the key */
	key_value = key_index((const unsigned char *)key, ht->size);

	/**
	* Go to the index in the hash table and traverse
	* the linked list until find the node with the key
	*/

	while (ht->array[key_value] != NULL)
	{
		if (strcmp(ht->array[key_value]->key, key) == 0)
		{
			return (ht->array[key_value]->value);
		}
		else
		{
			ht->array[key_value]->next++;
		}
	}
	return (NULL);
}
