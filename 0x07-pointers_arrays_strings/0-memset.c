#include "holberton.h"
/**
* _memset - C - Even more pointers, arrays and strings
* @s: Value of s.
* @b: Constant byte.
* @n: Number of bytes to change.
*
* Description: Write a function that fills memory with a constant byte.
* Return: Returns a pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;  i++)
	{
		s[i] = b;
	}

	return (s);
}
