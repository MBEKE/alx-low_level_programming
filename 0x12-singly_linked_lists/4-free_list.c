#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *next;
	list_t *current = head;

	while (current = head)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
