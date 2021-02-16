#include "holberton.h"
/**
* _puts -C - Pointers, arrays and strings
* @str: String to be printed
*
* Description: Write a function that prints
* a string, followed by a new line, to stdout.
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
