#include "holberton.h"
/**
* print_rev - C - Pointers, arrays and strings
* @s: string
*
* Description: Write a function that prints a string,
* in reverse, followed by a new line.
*/
void print_rev(char *s)
{
	int i;
	int j;
	int length;

	length = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		length++;
	}

	for (j = length; j >= 0;  j--)
	{
		_putchar(*(s + j));
	}

	_putchar('\n');
}
