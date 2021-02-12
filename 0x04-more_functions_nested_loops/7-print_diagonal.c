#include "holberton.h"
/**
* print_diagonal - C - More functions, more nested loops
* @n: the number of times the character \ should be printed
*
* Description: Write a function that draws a diagonal line on the terminal.
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n >= 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= n - 1; j++)
			{
				if (i > j)
				{
					_putchar(' ');
				}

				else if (i == j)
				{
					_putchar(92);
					_putchar('\n');
					continue;
				}
			}
		}
	}

	else
	{
		_putchar('\n');
	}
}
