#include "3-calc.h"
/**
* op_add - C - Function pointers
* @a: Integer
* @b: Integer
*
* Description: Addition of two numbers int
* Return: Result of the addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - C - Function pointers
* @a: Integer
* @b: Integer
*
* Description: Subtraction of two numbers int
* Return: Result of the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - C - Function pointers
* @a: Integer
* @b: Integer
*
* Description: Multiplication of two numbers int
* Return: Result of the Multiplcation
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - C - Function pointers
* @a: Integer
* @b: Integer
*
* Description: Division of two numbers int
* Return: Result of the division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - C - Function pointers
* @a: Integer
* @b: Integer
*
* Description: Modulo of two numbers int
* Return: Reminder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
