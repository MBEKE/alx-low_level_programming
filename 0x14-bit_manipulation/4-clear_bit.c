#include "main.h"

/**
 * clear_bit - sets the valued of a bit to 0 at a given index.
 * @n: a pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if worked, -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* Clear the bit at the specified index */
	*n &= -(1UL << index);
	return (1);
}
