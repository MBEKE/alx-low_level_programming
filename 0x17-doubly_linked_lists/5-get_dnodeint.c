#include "lists.h"

/**
* get_dnodeint_at_index - returns  the nth node of a dlistint_t linked list.
* @head: pointer to the head of the list.
* @index: The index of the node, starting from 0
*
* Return: The pointer to the nth node, or NULL if the node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;

	}
	return (NULL);
}
