#include "lists.h"

/**
* listint_len - C - More singly linked lists
* @h: pointer to head of linked list
*
* Description: A function that returns the number of
* elements in a linked listint_t list.
* Return: Number of elements in the list. 0 if there
* aren't nodes.
*/
size_t listint_len(const listint_t *h)
{
	int i;
	size_t counter;

	counter = 0;
	/* Verify that the list isn't NULL*/
	if (h == NULL)
		return (counter);

	/*Traverse the list and count the number of nodes*/
	for (i = 0; h != NULL; i++)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
