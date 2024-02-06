#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
