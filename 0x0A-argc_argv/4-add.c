#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 if successful, return 1 if one of the number
 * contain non-digit symbols
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i;
	int number;

	/* Check if no numbers are provided */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	/* Iterate through command-line arguments */
	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);
		/* Check if the argument is not a positive intege */
		if (number <= 0 || !isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		/* Add the positive number to the add */
		add += number;
	}
	printf("%d\n", add);
	return (0);
}

