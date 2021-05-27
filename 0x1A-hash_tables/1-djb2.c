#include "hash_tables.h"
/**
* hash_djb2 - C - Hash tables
* @str: String to be transformed by the hash function
*
* Description: Algorithm (k=33).
* hash(i) = hash(i - 1) * 33 ^str[i]
* Return: The hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
