#include "lists.h"

/**
* list_len - C - Singly linked lists
* @h: linked list header
*
* Description: Write a function that returns the
* number of elements in a linked list_t list.
* Return: Number of elements in a linked list.
*/
size_t list_len(const list_t *h)
{
	size_t i, counter;

	counter = 0;
	/* Guard code */
	if (h == NULL)
	{
		return (0);
	}

	/* Counter of number of elements */

	for (i = 0; h != NULL; i++)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
