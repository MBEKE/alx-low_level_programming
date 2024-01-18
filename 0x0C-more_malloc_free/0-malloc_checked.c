#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *checked;

	/* allococte memory */
	checked = malloc(b);
	/* check for allocation failure */
	if (checked == NULL)
		exit(98);
	return (checked);
}
