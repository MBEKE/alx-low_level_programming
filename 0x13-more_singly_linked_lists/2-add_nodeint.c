#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to pointer to the end of the list.
 * @n: value to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* pointer to new node */

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	/* check for mem allocation failure */
	if (new_node == NULL)
		return (NULL);
	/* assign the value'n' to the new node */
	new_node->n = n;
	/* set the 'next' pointer of the new node to point to the current head */
	new_node->next = *head;

	/* update the head pointer to point to the new node */
	*head = new_node;
	/* Return the address of the new element */
	return (new_node);
}
