#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of its parameters.
 * @n: Number of parameters
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int  sum = 0;
	va_list summation;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(summation, n);

	for (i = 0; i < n; i++)
		sum += va_arg(summation, int);
	va_end(summation);
	return (sum);
}
