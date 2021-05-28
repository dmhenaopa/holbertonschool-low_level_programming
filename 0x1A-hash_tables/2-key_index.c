#include "hash_tables.h"

/**
* key_index - C - Hash tables
* @key: the key of hash table
* @size: size of the array of the hash table
*
* Description: A function that gives you the index of a key.
* Return: The index at which the key/value pair should be
* stored in the array of the hash table.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_key;

	if (key == NULL)
	{
		exit(EXIT_FAILURE);
	}

	if (size == 0)
	{
		exit(EXIT_FAILURE);
	}
	new_key = (hash_djb2(key) % size);
	return (new_key);
}
