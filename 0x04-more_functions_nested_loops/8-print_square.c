#include "holberton.h"
/**
* print_square - C - More functions, more nested loops
* @size: size of the square
*
* Description: Write a function that prints a square,
* followed by a new line.
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
