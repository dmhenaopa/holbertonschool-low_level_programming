#include "lists.h"

/**
* sum_listint - C - More singly linked lists
* @head: Pointer to first node
*
* Description: A function that returns the sum of
* all the data (n) of a listint_t linked list.
* Return: sum of all the data or 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	/* Guard code */
	if (head == NULL)
		return (0);

	/* Traverse the list adding the n value of each node */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
