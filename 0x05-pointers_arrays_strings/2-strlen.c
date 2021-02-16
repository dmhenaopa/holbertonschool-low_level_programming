#include "holberton.h"
/**
* _strlen - C - Pointers, arrays and strings
* @s: character
*
* Description: Write a function that returns the length of a string.
* Return: number of characteres that contains a string
*/
int _strlen(char *s)
{
	int length;
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length = i + 1;
	}

	return (length);
}
