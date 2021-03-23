#include "lists.h"

/**
* free_listint - C - More singly linked lists
* @head: Pointer to the first node of list
*
* Description: A function that frees a listint_t list.
*/
void free_listint(listint_t *head)
{
	listint_t *actual_node, *next_node;

	/* Assign the head pointer to actual_node */
	actual_node = head;

	/* Iterate to delete node by node of list */
	while (actual_node != NULL)
	{
		/* Save the pointer of the next node, before eliminate actual */
		next_node = actual_node->next;

		/* Eliminate the information of actual node */
		free(actual_node);

		/* Go to next node */
		actual_node = next_node;
	}
}
