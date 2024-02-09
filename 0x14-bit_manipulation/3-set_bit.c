#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: a pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successfule or -1 if failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is valid */
	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);
	/* set the bit a the specified index to 1 */
	*n |= (1UL << index);
	return (1);
}
