#include <stdio.h>
#include <math.h>
/**
* largest_prime_factor - finds the larges prime factor of a number
* @n: the number to find the largest prime factor of
*
* Return: the larges prime factor
*/
int long largest_prime_factor(int long n)
{
	int long i;

	while (n % 2 == 0)
		n /= 2;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
			n /= i;
	}

	if (n > 2)
		return (n);
	return (i);
}
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int long number = 612852475143;
	int long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}
