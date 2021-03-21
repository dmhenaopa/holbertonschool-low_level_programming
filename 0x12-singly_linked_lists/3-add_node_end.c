#include "lists.h"

/**
* add_node_end - C - Singly linked lists
* @head: Pointer to the first node
* @str: The string to be added in the node
*
* Description: A function that adds a new node
* at the end of a list_t list.
* Return: the address of the new element,
* or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *copy_nodes;
	int i, counter;

	counter = 0;
	/* Allocate a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* Guard code - if initialy the list is empty */
	if (head == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
		/* We need to know the length of input string*/
		for (i = 0; str[i] != '\0'; i++)
			counter++;
		/* Put the new data in the new node */
		new_node->str = strdup(str);
		new_node->len = counter;
	}
	/* This new node will have the new data, */
	/* but because the insertion is at the end */
	/* we need to point to a NULL in next */
	new_node->next = NULL;
	if (*head != NULL)
	{
		copy_nodes = *head;
		/* Find the last node and change the next of the */
		/* last node for the new node */
		while (copy_nodes->next != NULL)
			copy_nodes = copy_nodes->next;
		/* Switch places last node - new node */
		copy_nodes->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
