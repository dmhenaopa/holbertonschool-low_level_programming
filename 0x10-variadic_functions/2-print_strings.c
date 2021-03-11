#include "variadic_functions.h"
/**
* print_strings - C - Variadic functions
* @separator: string to be printed between the strings.
* @n: number of strings passed to the function.
*
* Description: A function that prints strings,
* followed by a new line.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *toprint;

	/*Initalize list*/
	va_start(string_list, n);

	/*Get the values*/
	for (i = 0; i < n; i++)
	{
		toprint = va_arg(string_list, char*);
		if (toprint == NULL)
			printf("(nil)");
		else
			printf("%s", toprint);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(string_list);
	printf("\n");
}
