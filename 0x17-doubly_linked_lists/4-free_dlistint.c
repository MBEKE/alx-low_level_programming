#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to the head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
