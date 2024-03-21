#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
* @head: pointer to the head of the list.
*
* Return: the sum of all the data (n), or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
