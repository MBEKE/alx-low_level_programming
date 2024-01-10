#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base
 * @y: The exponent.
 *
 * Return: The result of x raised to the powe of y,
 *	If y is lower than 0, returns -1 to indicate error
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		/* If y < 0, return -1 to indicate error*/
		return (-1);
	else if (y == 0)
		/* Base case: x^0 is 1 */
		return (1);
	/* Make recursive call to calculate x^y */
	power = x * _pow_recursion(x, y - 1);
	return (power);
}
