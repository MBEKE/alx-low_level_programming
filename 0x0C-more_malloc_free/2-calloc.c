#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, and initializes to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory
 *	If malloc fails, the function returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptrArray;
	unsigned int i;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocate  memory for the array */
	ptrArray = malloc(nmemb * size);

	/* Check for malloc failure */
	if (ptrArray == NULL)
		return (NULL);
	/* Innitialize the allocated memory to zero */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptrArray + i) = 0;
	return (ptrArray);
}
