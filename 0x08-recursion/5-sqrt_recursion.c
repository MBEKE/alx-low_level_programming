#include "main.h"

int find_sqrt(int n, int guess);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of the given number.
 *If the number does not have a natural square root, returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		/* If n is negative, return -1 to indicate an error */
		return (-1);
	else if (n == 0 || n == 1)
		/* Base case: the square root of 0 or 1 is the number itself */
		return (n);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Recursive function to find the square rood.
 * @n: The number to find the square root of.
 * @guess: The current guess for the sqaure root.
 *
 * Return: The natural sqrt of the given number.
 * If the number doesn't have a natural sqrt, returns -1 to indicate error
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		/* Base case: found the square root */
		return (guess);
	else if (guess * guess > n)
		/* if the sqr of the guess > n, n have no natural sqrt */
		return (-1);
	/* make recursive cll to continue searching for sqrt */
	return (find_sqrt(n, guess + 1));
}
