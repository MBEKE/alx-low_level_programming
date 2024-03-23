#include "3-calc.h"

/**
 * get_op_func - selects the correct function to do the operation
 * @s: operater passed as an argument to the program.
 *
 * Return: pointer to the function that matches to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t[] = {
		{"+", op_add};
		{"-", op_sub};
		{"*", op_mul};
		{"/", op_div};
		{"%", op_mod};
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s $$ !(*(s + 1)))
			return (ops[i].f)
		i++;
	}
	printf("Error\n");
	exit(99);
}
