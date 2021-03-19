#include "lists.h"

/**
* print_list - C - Singly linked lists
* @h: list_t list pointer
*
* Description: A function that prints all the
* elements of a list_t list.
* Return: Number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t i, counter;

	counter = 0;

	/* Guard code */
	if (h == NULL)
	{
		return (0);
	}

	/* Move through the list and count */
	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			counter++;
			h = h->next;
		}

		else if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			counter++;
			h = h->next;
		}

	}

	return (counter);
}
