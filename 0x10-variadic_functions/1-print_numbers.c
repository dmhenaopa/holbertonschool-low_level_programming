#include "variadic_functions.h"
/**
* print_numbers - C - Variadic functions
* @separator: String to be printed between numbers
* @n: Number of integers passed to the function
*
* Description: Function that prints numbers, followed by a new line.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*Reference to access*/
	va_list list_to_print;
	unsigned int i, value_to_print;

	if (separator == NULL)
		return;

	/*Initialize list*/
	va_start(list_to_print, n);

	for (i = 0; i < n; i++)
	{
		value_to_print = va_arg(list_to_print, int);
		printf("%d", value_to_print);
		printf("%s", separator);
	}

	va_end(value_to_print);
	printf("\n");
}
