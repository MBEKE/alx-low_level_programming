#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocates space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	unsigned int min_size = old_size < new_size ? old_size : new_size;

	/* Handle special cases */
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Allocate memory for the new size */
	new_ptr = malloc(new_size);

	/* Check for allocation failure */
	if (new_ptr == NULL)
		return (NULL);
	/* Copy contents to the newly allocated space manually */
	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	/* Free the original memory block */
	free(ptr);

	return (new_ptr);
}
