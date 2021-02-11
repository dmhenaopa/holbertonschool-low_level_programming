#include "holberton.h"
/**
* print_numbers - C - More functions, more nested loops
*
* Description: Write a function that prints the numbers,
* from 0 to 9, followed by a new line.
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
