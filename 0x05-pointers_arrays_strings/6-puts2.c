#include "holberton.h"
/**
* puts2 - C - Pointers, arrays and strings
* @str: Input string
*
* Description: Write a function that prints every
* other character of a string, starting with the
* first character, followed by a new line.
*/
void puts2(char *str)
{
	int i;

	if (str[0] != '\0')
	{
		for (i = 0; i % 2 == 0 && str[i] != '\0'; i += 2)
		{
			_putchar(str[i]);
		}

		for (i = 0; !(i % 2 == 0) && str[i] != '\0' && str[i] - 1; i += 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
