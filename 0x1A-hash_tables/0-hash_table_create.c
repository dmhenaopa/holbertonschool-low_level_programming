#include "hash_tables.h"

/**
* hash_table_create - C - Hash tables
* @size: size of the array
*
* Description: Function that creates a hash table
* Return: A pointer to the newly created hash table.
* Otherwise, returns NULL.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	/* Assign value to the hash table */
	hash_table->size = size;

	/* Allocate memory for the array of pointers */
	hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	/* Initialize each pointer of array with NULL */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
