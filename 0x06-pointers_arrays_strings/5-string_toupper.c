#include "main.h"

/**
* string_toupper - Changer all lowercase letters of a string to uppercase
* @str: The input string.
*
* Return: A pointer to the resulting strin.
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			/* convert lowercase to uppercase */
			*ptr = *ptr - ('a' - 'A');
		ptr++;
	}
	return (str);
}
