#include "holberton.h"
/**
* _abs - C - Functions, nested loops task
* @num: integer
*
* Description: Write a function that computes the
* absolute value of an integer.
* Return: The absolute value of an integer
*/
int _abs(int num)
{
	int abs_num;

	if (num < 0)
	{
		abs_num = num * -1;
	}
	else
	{
		abs_num = num;
	}
	return (abs_num);
}
