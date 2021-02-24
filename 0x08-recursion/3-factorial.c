#include "holberton.h"
/**
* factorial - C - Recursion
* @n: Input number
*
* Description: Write a function that returns the factorial of a given number.
* Return: The factorial of a given number.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
		n--;
	}
}
