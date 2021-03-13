#include "3-calc.h"

/**
* get_op_func - C - Function pointers
* @s: Operator chose for user
*
* Description: Selects the correct function
* to perform the operation asked by the user.
* Return: Pointer of function corresponds to operator
* given as parameter.
*/
int (*get_op_func(char *s))(int a, int b)
{
	int i;

	op_t ops[] = {
		{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
