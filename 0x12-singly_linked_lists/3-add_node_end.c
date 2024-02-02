#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: ptr to ptr to the head of the list.
 * @str: string to be duplicated and added to the new node.
 *
 * Return: the address of the new element, NULL if unsuccessful.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t current;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		/* if the list is empty, make the new mode the heae */
		*head = new_node;
	}
	else
	{
		/* Traverse to the end o fthe list and add the new node */
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
