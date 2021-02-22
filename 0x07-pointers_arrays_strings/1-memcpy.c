#include "holberton.h"
/**
* _memcpy - C - Even more pointers, arrays and strings
* @dest: destination address
* @src: source to copy
* @n: Number of bytes (copies)
*
* Description: Write a function that copies memory area.
* Return: A pointer to the memory area s.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
