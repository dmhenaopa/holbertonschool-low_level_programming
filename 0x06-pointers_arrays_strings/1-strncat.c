#include "holberton.h"
/**
* *_strncat - C - More pointers, arrays and strings
* @dest: Input string
* @src: Input string
* @n: Integer number of bytes
*
* Description: Write a function that concatenates two strings.
* If length of string src is less than n prints only until the '\'0'
* Return: Returns a pointer to the resulting string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int size = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		size++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[size] = src[j];
		++size;
	}

	return (dest);
}
