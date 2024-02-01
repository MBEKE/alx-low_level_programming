#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 *@h: pointer to the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		/* check if the string is NULL and print accordingly */
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			/* print the length and string of the current node */
			printf("[%u] %s\n", current->len, current->str);
		/* move to the next node */
		current = current->next;
		count++;
	}
	return (count);
}
