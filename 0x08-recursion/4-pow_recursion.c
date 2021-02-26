#include "holberton.h"
/**
* _pow_recursion - C - Recursion
* @x: base number
* @y: power number
*
* Description: Write a function that returns the value of
* x raised to the power of y.
* Return: The value of x raised to the power of y.
* If y is lower than 0, the function should return -1.
*/
int _pow_recursion(int x, int y)
{
	int power;

	if (y > 1)
	{
		power = x * (_pow_recursion(x, y - 1));
		y--;
		return (power);
	}

	else if (y < 0)
	{
		return (-1);
	}
}
