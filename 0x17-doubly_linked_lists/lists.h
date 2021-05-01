#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/*Typedef and structures*/
/**
* struct dlistint_s - double linked list
* @n: Number data
* @prev: points to the previous node
* @next: points to the next node
*
* Description: double linked list node structure
* with previous and next pointers
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*Prototypes*/
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif /*LISTS_H*/
