#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments.
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: A pointer to a new string containing the concatenated
 * arguments or NULL if ac or av == 0
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int i, j;
	char *result;

	/* check if ac == 0 or av == NULL and return NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++; /* Add space for '\n' after each argument */
	}
	/* Allocate memory for the concatenated string */
	result = malloc(total_len + 1); /* Add space for null terminator */
	/* Check if mem allocation is successfull */
	if (result == NULL)
		return (NULL); /* To signify fail */
	/* Concatenate the arguments with '\n' */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[total_len] = av[i][j];
			total_len++;
		}
		result[total_len] = '\n';
		total_len++;
	}
	result[total_len] = '\0'; /* Add null terminator */
	return (result);
}
