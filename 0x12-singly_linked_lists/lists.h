#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*Typedef and structures*/

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*Prototypes*/
size_t print_list(const list_t *h);

#endif /* _LISTS_H_ */
