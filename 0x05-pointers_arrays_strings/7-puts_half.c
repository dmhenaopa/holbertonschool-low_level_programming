#include "holberton.h"
/**
* puts_half - C - Pointers, arrays and strings
* @str: input string
*
* Description: Write a function that prints half
* of a string, followed by a new line.
*/
void puts_half(char *str)
{
	int i;
	int j;
	int size = 0;
	int halfsize;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	if ((size) % 2 == 0)
	{
		halfsize = (size) / 2;
	}

	else
	{
		halfsize = (size - 1) / 2;
	}

	for (j = halfsize; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
