#include "lists.h"

/**
* add_nodeint - C - More singly linked lists
* @head: Pointer that points to header.
* @n: New data to be added.
*
* Description: A function that adds a new node
* at the beginning of a listint_t list.
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Step1: Assign memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Step2: Put the data in the new node */
	new_node->n = n;

	/* Step3: Make this new node the head */
	new_node->next = *head;

	/* Step4: Move the head to point to the new node */
	*head = new_node;

	return (new_node);
}
