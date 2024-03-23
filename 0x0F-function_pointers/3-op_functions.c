#include "3-calc.h"
/**
 * op_add - returns sume of a and b
 * @a: 1st integer
 * @b: 2nd integer.
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: 1st integer
 * @b: 2nd integer.
 *
 * Return: sum of a & b
 */
int op_sub(int a, int b)
{
	return (a -  b);
}

/**
 * op_mul - returns product  of a and b
 * @a: 1st integer
 * @b: 2nd integer.
 *
 * Return: sum of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division  of a by b
 * @a: 1st integer
 * @b: 2nd integer.
 *
 * Return: sum of a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	return (a /  b);
	}
}

/**
 * op_mod - returns remainder of the  division  of a by b
 * @a: 1st integer
 * @b: 2nd integer.
 *
 * Return: sum of a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	return (a %  b);
	}
}
