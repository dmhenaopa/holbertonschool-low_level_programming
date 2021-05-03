#include "lists.h"

/**
* get_dnodeint_at_index - C - Doubly linked lists
* @head: Head of linked list
* @index: Number of node
*
* Description: A function that returns the nth node
* of a dlistint_t linked list.
* Return: The node. If the node doesnt exist return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter, i;
	dlistint_t *node_data, *copy_one, *copy_two;

	counter = 0;
	copy_one = head;
	copy_two = head;
	/* Verify that head isnt NULL */
	if (head == NULL)
	{
		return (NULL);
	}

	/* Verify that index is lower or has the same number of nodes */
	while (copy_one != NULL && copy_one->next != NULL)
	{
		counter++;
		copy_one = copy_one->next;
	}

	counter = counter - 1;
	if (counter < index)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i <= index; i++)
		{
			node_data = copy_two;
			copy_two = copy_two->next;
		}
	}
	return (node_data);
}
