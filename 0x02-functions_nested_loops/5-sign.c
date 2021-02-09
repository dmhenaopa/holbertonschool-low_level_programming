#include "holberton.h"
/**
* print_sign - C - Functions, nested loops
* @n: Input number
*
* Description: Write a function that prints
* the sign of a number.
* Return: 1 if n is greater than zero, 0 if n is zero
* and -1 if n is less than zero
*/
int print_sign(int n)
{
	int numb;

	if (n == 0)
	{
		_putchar(48);
		numb = 0;
	}

	else
	{
		if (n > 0)
		{
			_putchar(43);
			numb = 1;
		}

		else
		{
			_putchar(45);
			numb = -1;
		}
	}
	return (numb);
}
