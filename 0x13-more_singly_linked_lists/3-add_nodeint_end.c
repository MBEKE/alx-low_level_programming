#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of the list.
 * @n: interger
 *
 * Return: address of the new element, NULL if unsuccessful
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *temp;/* temp pointer to traverse the list */
	/* allocate memory for the new node */
	end_node = malloc(sizeof(listint_t));
	/* check for  allocation failure */
	if (end_node == NULL)
		return (NULL);
	/* assign the value 'n' to the end_node */
	end_node->n = n;
	end_node->next = NULL;
	/* if the list is empty, make the new nod the head of the  list */
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	/* otherwise, traverse the list to find the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	/* update the next pointer of the last node to point to end_node */
	temp->next = end_node;
	return (end_node);
}
