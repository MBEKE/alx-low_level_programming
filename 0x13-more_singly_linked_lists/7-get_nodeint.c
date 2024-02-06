#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: pointer to the nth node, NULL id the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	current = head;
	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (index > 0)
		return (NULL);
	return (current);
}
