#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - C - Function pointers
* @name: Name that should be print
* @f: Pointer to function that prints the name
*
* Description: A function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	else
		/*This can be (*f)(name)*/
		f(name);
}
