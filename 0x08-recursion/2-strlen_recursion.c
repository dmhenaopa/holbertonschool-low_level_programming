#include "holberton.h"
/**
* _strlen_recursion - C - Recursion
* @s: Input string
*
* Description: Write a function that returns the length of a string.
* Return: Lenght of a string
*/
int _strlen_recursion(char *s)
{
	int counter;

	if (*s == '\0')
	{
		return (0);
	}

	counter = _strlen_recursion(s + 1);
	++counter;
	return (counter);
}
