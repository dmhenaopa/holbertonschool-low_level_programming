#include "holberton.h"
/**
* *_strcpy - C - Pointers, arrays and strings
* @dest: Input character
* @src: Input character
*
* Description:Write a function that copies the string
* pointed to by src, including the terminating null byte
* (\0), to the buffer pointed to by dest.
* Return: The pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
