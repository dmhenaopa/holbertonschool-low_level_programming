#include "lists.h"

/**
* add_nodeint_end - C - More singly linked lists
* @head: Pointer to the linked list
* @n: integer data to be added
*
* Description: A function that adds a new node at
* the end of a listint_t list.
* Return: The address of the new element or NULL if it
* failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	/* Step1: Allocate the new node and make a copy to traverse */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	last = *head;

	/* Step2: Put the data in the new node */
	new_node->n = n;

	/* Step3: Put NULL in the next element of new_node*/
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Step4: Traverse the list until the last node */
	while (last->next != NULL)
		last = last->next;

	/* Step5: Change the next of last node */
	last->next = new_node;

	return (new_node);
}
