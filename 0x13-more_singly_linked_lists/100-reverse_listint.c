#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: pointer to a pointer to the  head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* pointer to previous node */
	listint_t *next; /* pointer to next node */
	listint_t *current = *head; /* pointer to current node */

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;/* update the head pointer to point to last node */
	return (*head);
}
