#include "main.h"
#include<stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly createdd array, of NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	/* Check if min is greateer than max */
	if (min > max)
		return (NULL);

	/* Calclulate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	array = malloc(sizeof(int) * size);

	/* Check for allocation failure */
	if (array == NULL)
		return (NULL);
	/* Populate the array with values form min to max */
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
