#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count.
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise exit status.
 */
int main(int argc, char *argv[])
{
	int number1, number2, result;
	int (*peration)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	result = operation(number1, number2);

	printf("%d\n", result);

	return (0);
}
