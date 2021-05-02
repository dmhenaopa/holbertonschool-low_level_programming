#include "lists.h"

/**
* add_dnodeint_end - C - Doubly linked lists
* @head: Pointer to the first node.
* @n: Number to be inserted.
*
* Description: A function that adds a new node
* at the end of a dlistint_t list.
* Return: the address of the new element,
* or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, copy_pointer;

	/* Guard code */
	if (head == NULL)
	{
		return (NULL);
	}

	/* 1. Allocate new_node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* 2. Put data in the new_node */
	new_node->n = n;

	/* 3. Make new_node the tail */
	new_node->next = NULL;

	/* 4. Traverse the list until the end */
	if (head != NULL)
	{
		copy_pointer = *head;
		head = head->next;
	}

	/* 5. 
}
