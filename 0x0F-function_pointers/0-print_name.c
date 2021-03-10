#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - C - Function pointers
* @name: Name that should be printed
* @f: Pointer to function that prints the name
*
* Description: A function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name); /*This can be (*f)(name)*/
}
