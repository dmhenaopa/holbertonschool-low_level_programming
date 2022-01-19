#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <math.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t lower, size_t higher);
int jump_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */
