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
	dlistint_t *new_node, *copy;

	copy = *head;
	/* 1. Allocate new_node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/**
	* 2. Put data in the new_node and prepare
	* new_node to be the end of the list - NULL
	*/
	new_node->n = n;
	new_node->next = NULL;

	/* 3. If the linked list is empty */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	else
	{
		/* 4. Traverse the list until the end */
		while (copy->next)
		{
			copy = copy->next;
		}

		/* 5. Put new_node at the end of list */
		copy->next = new_node;
		new_node->prev = copy;
	}

	return (new_node);
}
