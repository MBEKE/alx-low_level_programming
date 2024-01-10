#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The integer whose factorial is to be determined
 * Return: -1 if n < 0 otherwise return factorial of n
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		/* If n is lower than 0, return -1 to indicate errour */
		return (-1);
	else if (n == 0 || n == 1)
		/* Base case: factorial of 0 or 1 is 1 */
		return (1);
	/* calculate the factorial */
	fact = n * factorial(n - 1);

	return (fact);
}
