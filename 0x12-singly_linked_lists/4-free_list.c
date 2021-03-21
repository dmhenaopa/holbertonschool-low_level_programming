#include "lists.h"

/**
* free_list - C - Singly linked lists
* @head: First node address
*
* Description: A function that frees a list_t list.
*/
void free_list(list_t *head)
{
	list_t *actual_node, *next_node;

	/* copy of head pointer in actual_node */
	actual_node = head;

	/* Delete node by node - iterate */
	while (actual_node != NULL)
	{
		/* Receive the pointer of the next into new variable*/
		next_node = actual_node->next;

		/* Free the value of str in the new variable */
		free(actual_node->str);

		/* Free completely the new variable */
		free(actual_node);

		/* Go to next_node and iterate */
		actual_node = next_node;
	}
}
