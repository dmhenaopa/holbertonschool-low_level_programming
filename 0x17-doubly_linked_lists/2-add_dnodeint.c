#include "lists.h"

/**
* add_dnodeint - C - Doubly linked lists
* @head: head of linked list.
* @n: number to be added in the node.
*
* Description: Function that adds a new
* at the beginning of a dlistint_t list.
* Return: Address of the new element or NULL
* if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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

	/* 3. Make new_node the head */
	new_node->prev = NULL;
	new_node->next = *head;

	/* 4. Make the second node point to the new node */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* 5. Move the head to point to the new_node */
	*head = new_node;
	return (new_node);
}
