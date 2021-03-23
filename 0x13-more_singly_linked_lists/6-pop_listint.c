#include "lists.h"

/**
* pop_listint - C - More singly linked lists
* @head: Pointer to head node
*
* Description: A function that deletes the head node
* of a listint_t linked list.
* Return: Head node's data (n). If the linked list is
* empty return 0.
*/
int pop_listint(listint_t **head)
{
	listint_t *nexthead;
	int node_data;

	nexthead = *head;
	/* Step1: Verify if the list is empty */
	if (*head == NULL)
		return (0);

	/* Step2: Change the head of the list */
	*head = nexthead->next;

	/* Step3: Save the data in a new variable and free */
	node_data = nexthead->n;
	free(nexthead);
	return (node_data);
}
