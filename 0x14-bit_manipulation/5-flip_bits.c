#include "main.h"

/**
 * flip_bits - returns the number of bit needed to flip to covert
 *	one number to another
 * @n: the first number.
 * @m: the 2nd no.
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Count the no. of see bits in the XOR result */
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
