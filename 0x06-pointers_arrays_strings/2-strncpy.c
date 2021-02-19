#include "holberton.h"
/**
* *_strncpy - C - More pointers, arrays and strings
* @dest: Input character
* @src: Input character
* @n: Input integer with number of characters that need to
* be copy.
*
* Description: Write a function that copies a string.
* Return: String copied.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
