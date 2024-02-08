#include "main.h"

/**
 * get_bit -Returns the value of a bit at a given index
 * @n: the no. containing the bit
 * @index: the index of the bit to get
 *
 * Return: the valued od the bit at the specific index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if indes is valid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* shift the number to the right by index positions */
	n >>= index;
	/* return the most significant  bit of n */
	return (n & 1);
}
