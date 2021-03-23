#include "lists.h"

/**
* get_nodeint_at_index -C - More singly linked lists
* @head: Pointer to header of list
* @index: index of the node, starting at 0.
*
* Description: A function that returns the nth node of
* a listint_t linked list.
* Return: An especific node. If the node does not exist
* return NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	/* Guard code */
	if (head == NULL)
		return (NULL);

	/* Step1: Traverse the list until the specific node - counter == index */
	while (head != NULL)
	{
		if (counter == index)
			return (head);

		counter++;
		head = head->next;
	}

	/* Step2: If the node doesnt exist - NULL */
	return (NULL);
}
