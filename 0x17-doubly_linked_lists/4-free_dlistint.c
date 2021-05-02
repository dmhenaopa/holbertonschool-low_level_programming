#include "lists.h"

/**
* free_dlistint - C - Doubly linked lists
* @head: list to be free
*
* Description: A function that frees a list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node, *next_node;

	/* Copy of head pointer in actual_node */
	actual_node = head;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		free(actual_node);
		actual_node = next_node;
	}
}
