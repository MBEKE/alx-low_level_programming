#include "main.h"

int is_prime_recursive(int n, int i);
/**
 * is_prime_number - Checks if a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if the numer is prim, 0 otherwise
 *
 */
int is_prime_number(int n)
{
	if (n <= 1) /* 0 and 1 are not prime numbers */
		return (0);
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - helper function for recursive checking of prime numbers
 * @n: the number to be checked
 * @i: the divisor to check if n i divisible by
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (i == n) /* base case: n is only divisible by itself */
		return (1);
	/* check for the next divisor */
	return (is_prime_recursive(n, i + 1));
}
