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
	char last_dig;

	if (num < 0)
	{
		num = num * -1;
		digit = num % 10;
	}
	else
	{
		digit = num % 10;
	}
	last_dig = _putchar('0' + digit);
	return (last_dig);
}
