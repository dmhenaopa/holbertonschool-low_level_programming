#include "holberton.h"
/**
* *_strcat - C - More pointers, arrays and strings
* @dest: Input string
* @src: Input string
*
* Description: Write a function that concatenates two strings.
* Return: Returns a pointer to the resulting string.
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int size = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		size++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[size] = src[j];
		++size;
	}

	return (dest);
}
