#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a funtion on each element of an array.
 * @array: an array to iterate throu'
 * @size: size of the array
 * @action: poiter to the function to be executed.
 *
 * Return: Noting
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Check if array and action pointer aren't NULL */
	if (array != NULL && action != NULL)
	{
		/* iterate thro' each element of the array & execute the function */
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
