#include "function_pointers.h"
/**
* print_name - C - Function pointers
* @name: Name that should be use
* @f: Pointer to function
*
* Description: A function that impress a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name); /*This can be (*f)(name)*/
}
