#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
int op_add(int a, int b); /*Addition*/
int op_sub(int a, int b); /*Substraction*/
int op_mul(int a, int b); /*Multiplication*/
int op_div(int a, int b); /*Division*/
int op_mod(int a, int b); /*Modulo*/
int (*get_op_func(char *s))(int, int); /*Definition of operator*/

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /*CALC_H*/
