#include "lists.h"

/**
* print_dlistint - C - Doubly linked lists
* @h: linked list
*
* Description: A function that prints all the
* elements ofa dlistint_t list.
* Return: Number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
