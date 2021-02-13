#include "holberton.h"
/**
* print_triangle - C - More functions, more nested loops
* @size: Integer size of the triangle.
*
* Description: Write a function that prints a triangle,
* followed by a new line.
*/
void print_triangle(int size)
{
	int i;
	int j;
	int count = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == count)
				{
					_putchar('#');
					count--;
				}

				else if (j > count)
				{
					_putchar('#');
				}

				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
