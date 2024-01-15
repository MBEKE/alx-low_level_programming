#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the number elements in the array to be created
 * @c: the variable to be stored
 *
 * Return: NULL if size is 0, else return the pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arrayPtr;
	unsigned int count;
	/* check if size is 0, return NULL if true */
	if (size == 0)
		return (NULL);
	/* Allocate memory for the array */
	arrayPtr = malloc(size * sizeof(char));
	/* Check if memory allocation if successful */
	if (arrayPtr == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		arrayPtr[count] = c;
	return (arrayPtr);
}
