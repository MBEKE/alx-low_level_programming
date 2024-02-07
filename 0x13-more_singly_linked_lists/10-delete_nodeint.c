#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given position in a listint_
 * @head: pointer to pointer to the head of the list.
 * @index: index of the node to be deleted (starts at 0)
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int counter = 0;

	/* check if head pointer is NULL */
	if (head == NULL || *head == NULL)
		return (-1);
	/* if index is 0, delete the node at the beginning */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* Trevewse the  list to find the node position index -1 */
	current = *head;
	while (current != NULL && counter < index - 1)
	{
		current = current->next;
		counter++;
	}
	/* if current is NULL or current's next pointer is NULL, cannot delete nod */
	if (current == NULL || current->next == NULL)
		return (-1);
	/* store the current nonde to be deleted in temp */
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
