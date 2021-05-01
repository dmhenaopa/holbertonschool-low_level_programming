#include "lists.h"

/**
* dlistint_len - C - Doubly linked lists
* @h: linked list
*
* Description: A function that return the number of
* elements of a dlistint_t list.
* Return: Number of nodes, otherwise 0.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
