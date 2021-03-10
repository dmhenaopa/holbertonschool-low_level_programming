#include "function_pointers.h"
/**
* print_name - C - Function pointers
* @name: Name that should be print
* @f: Pointer to function that prints the name
*
* Description: A function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	/*This can be (*f)(name)*/
	f(name);
}
