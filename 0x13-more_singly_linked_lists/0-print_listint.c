#include "lists.h"

/**
* print_listint - C - More singly linked lists
* @h: pointer to head of linked lists
*
* Description: A function that prints all the
* elements of a listint_t list.
* Return: The number of nodes. 0 if there aren't nodes.
*/
size_t print_listint(const listint_t *h)
{
	int i;
	size_t counter;

	counter = 0;
	/* Verify that the list isn't null */
	if (h == NULL)
		return (counter);

	/* If isn't null then traverse the list and print */
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
