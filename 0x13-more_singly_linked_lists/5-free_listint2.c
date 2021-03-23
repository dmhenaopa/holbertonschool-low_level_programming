#include "lists.h"

/**
* free_listint2 - C - More singly linked lists
* @head: Pointer to head of linker list
*
* Description: A function that frees a listint_t list.
*/
void free_listint2(listint_t **head)
{
	listint_t *actual_node, *next_node;

	/* Assign the head pointer address to actual_node */
	actual_node = *head;

	if (actual_node == NULL)
		return;

	/* Iterate to delete node by node */
	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		free(actual_node);
		actual_node = next_node;
	}

	/* Dereferenciate the head to set to NULL the real head */
	*head = NULL;
}
