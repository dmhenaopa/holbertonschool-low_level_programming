#include "holberton.h"
/**
* more_numbers - C - More functions, more nested loops
*
* Description: Write a function that prints 10 times
* the numbers, from 0 to 14, followed by a new line.
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
