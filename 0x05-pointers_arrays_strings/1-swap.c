#include "holberton.h"
/**
* swap_int - C - Pointers, arrays and strings
* @a: Integer pointer a
* @b: Integer pointer b
*
* Description: Write a function that swaps the values of two integers.
*/
void swap_int(int *a, int *b)
{
	int apointer = *a;
	int bpointer = *b;

	*a = bpointer;
	*b = apointer;
}
