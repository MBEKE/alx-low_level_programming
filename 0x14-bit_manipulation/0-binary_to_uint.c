#include "main.h"
#include <stddef.h>
/**
 * binary_to_unit - Converts a binary number to an unsigned int.
 * @b: the binary number as a string.
 *
 * Return: the converted no, o r 0 if there is one or mor char
 * in the string b that is not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	/* Iterate throu' each char in the string */
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		/* shift the result to the left by one position */
		result <<= 1;
		/* If the current char is '1',set the least significant bit*/
		if (*b == '1')
			result |= 1;
	}
	return (result);
}
