#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits;
	int i;
	/* check if n is zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* calculate the no of bits needed to represent n */
	bits = sizeof(unsigned long int) * 8;
	/* find the most signifcan bit that is set in n */
	while (!(n & (1LU << (bits - 1))))
		bits--;
	/* print binary rep of n */
	for (i = bits - 1; i >= 0; i--)
		_putchar((n & (1UL << i)) ? '1' : '0');
}
