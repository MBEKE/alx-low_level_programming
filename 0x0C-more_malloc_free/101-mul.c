#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - Checks if a string consists only of digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0); /* Not a digit */
		str++;
	}
	return (1); /* All charaters are digits */
}

/**
 * multiply- Multiplies 2 +ve numbers.
 * @num1: The 1st number.
 * @num2: The 2nd number.
 */
void multiply(char *num1, char *num2)
{
	int len = 0, len2 = 0, i, j;
	int *result, carry, digit;

	/* Calculate the lenght of num1  */
	while (num1[len1])
		len1++;
	/* Calculate the length of num2 */
	while (num2[len2])
		len2++;
	/* Allocate memory for the result array */
	result = calloc(len1 + len2, sizeof(int));

	/* Check of memory allocation failure */
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	/* Perform long multiplication algorithm */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			/* Multiply digits and add to the result */
			digit = ((num1[i] - '0') * (num2[j] - '0')
			+ result[i + j + 1] + carry);
			result = [i + j + 1] = digit % 10;
			carry = digits / 10;
		}
		/* Print the result */
		for (i = 0; i < len1 + len2; i++)
			printf("%d", result[i]);
		printf("\n");
		/* Free allocated memory */
		free(result);
	}
