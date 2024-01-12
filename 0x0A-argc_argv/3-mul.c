#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 if successful, otherwise return 1
 */
int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mult *= atoi(argv[i]);
	printf("%d\n", mult);
	return (0);
}
