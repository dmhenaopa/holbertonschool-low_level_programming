#include "lists.h"

/**
* sum_dlistint - C - Doubly linked lists
* @head: Linked list
*
* Description: A function that returns the sum of
* all the data (n) of a dlistint_t linked list.
* Return: Sum of all the data. If list is empty return 0.
*/
int sum_dlistint(dlistint_t *head)
{
	int sumatory;

	sumatory = 0;
	/* Verify that head isnt NULL */
	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sumatory = sumatory + head->n;
		head = head->next;
	}
	return (sumatory);
}
