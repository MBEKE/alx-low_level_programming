#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer in an array.
 * @array: array to search.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to compare values.
 *
 * Return: Index of the 1st element for which does not return 0,
 * -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check for valid inputs */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	/* Iterate thro' the array and find the index for the first match */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	/* Return -1 if no match is found */
	return (-1);
}
