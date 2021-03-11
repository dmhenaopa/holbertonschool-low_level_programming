#include "variadic_functions.h"
/**
* sum_them_all - C - Variadic functions
* @n: unsigned int
*
* Description: function that returns the sum of all its parameters.
* Return: integer with the sum of parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	/*Reference to access*/
	va_list input_numbers;
	unsigned int i, sum_result;

	sum_result = 0;

	if (n == 0)
		return (0);

	/*Initialize the argument list va_list*/
	va_start(input_numbers, n);

	/*Array to obtain the value in the list*/
	for (i = 0; i < n; i++)
		sum_result += va_arg(input_numbers, int); /*Get the integer value*/

	va_end(input_numbers); /*Clean up the list*/

	return (sum_result);
}
