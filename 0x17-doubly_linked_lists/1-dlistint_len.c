#include "lists.h"

/**
* dlistint_len - returns the no. of elements in a linked dlistint_t list.
* @h: pointer to the head of the list
*
* Return: the number of elements in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	/* Create a temporary pointer to traverse */
	const dlistint_t *current;
	size_t count = 0;

	/* If the head is NULL, return 0(empty list) */
	if (h == NULL)
		return (0);

	/* Set the temporary pointer to the head */
	current = h;

	/* Traverse the list until the end, incrementing the counter*/
	while (current != NULL)
	{
		count++;
		current = current->next; /* Move to the next node */
	}
	return (count);
}
