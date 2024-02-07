#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - safely frees a listint_t linked list.
 * @h: pointer to the head of the list.
 *
 * Return: The size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next_node;
	size_t node_count = 0; /* counter to track the no. of nodes freed */

	while (current != NULL)
	{
		next_node = current->next;
		free(current);/* free current node */
		node_count++;
		if (current <= next_node)
		{
			*h = NULL;
			return (node_count);
		}
		current = next_node;
	}
	*h = NULL; /* set head to NULL to indicate the list is freed */
	return (node_count);
}
