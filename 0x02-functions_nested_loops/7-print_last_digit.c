#include "holberton.h"
/**
* print_last_digit - C - Functions, nested loops
* @num: integer
*
* Description: Write a function that prints the
* last digit of a number.
* Return: the value of the last digit.
*/
int print_last_digit(int num)
{
	int digit;

	digit = num % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar('0' + digit);
	return (digit);
}
