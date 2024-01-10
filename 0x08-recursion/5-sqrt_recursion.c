#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of the given number.
 *If the number does not have a natural square root, returns -1
 */
int _sqrt_recursion(int n)
{
	int guess = 1;
	if (n < 0)
		/* If n is negative, return -1 to indicate an error */
		return (-1);
	else if (n == 0 || n == 1)
		/* Base case: the square root of 0 or 1 is the number itsele */
		return (n);

	/**
	 * Use a while loop to increment the guess untill its square is
	 * greater than or equal to n
	 */
	while (guess * guess < n)
		guess++;
	if (guess * guess == n)
		/* Base case: found square root */
		return (guess);
	/* If the square of the guesss is > n,n has no nat sq */
	return (-1);
}
