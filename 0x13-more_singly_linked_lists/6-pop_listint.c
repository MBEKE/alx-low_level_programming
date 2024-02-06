#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listing_t.
 * @head: the pointer to the pointer to the head of the list.
 *
 * Return: the head node's data(n),
 * otherwise return 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;/* var to store the data of the head node */
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	/* store the head node's data */
	data = (*head)->n;

	/* store the head node in temp */
	temp = *head;
	/* move the head pointer to the next node */
	*head = (*head)->next;
	/* free the memory allocated for the original head node */
	free(temp);
	return (data);
}
