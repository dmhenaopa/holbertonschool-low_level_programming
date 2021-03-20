#include "lists.h"

/**
* add_node - C - Singly linked lists
* @head: pointer to pointer to the head of list
* @str: string to be inserted on the front of the list
*
* Description: A function that adds a new node at the
* beginning of a list_t list.
* Return: Address of the new element or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i, counter;

	counter = 0;
	/* Guard code*/
	if (head == NULL)
	{
		return (0);
	}

	/* 1 step: Allocate a node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* 2 step: Put the new data in the new node */
	/* It is necessary to obtain lenght of str*/
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}

	new_node->str = strdup(str); /* Duplicate the str*/
	new_node->len = counter;

	/* 3 step: Assign to new_nodie the role of head -> next value */
	new_node->next = *head;

	/* 4 step: Move the head to point to the new_node */
	*head = new_node;

	return (new_node);
}
