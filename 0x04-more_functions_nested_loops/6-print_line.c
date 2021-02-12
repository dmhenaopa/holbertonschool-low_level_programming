#include "holberton.h"
/**
* print_line - C - More functions, more nested loops
* @n: number of times the character _ should be printed
*
* Description: Write a function that draws a straight
* line in the terminal.
*/
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}
