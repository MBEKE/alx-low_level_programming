#include "main.h"

/**
* rot13 -  Encodes a string using rot13
* @str: The input string
*
* Return: A pointer to the resulting string
*/
char *rot13(char *str)
{
	char *ptr = str;
	int i = 0;

	while (ptr[i] != '\0')
	{
		if ((ptr[i] >= 'a' && ptr[i] <= 'z') ||
		   (ptr[i] >= 'A' && ptr[i] <= 'Z'))
		{
			char base = (ptr[i] >= 'a' && ptr[i] <= 'z') ? 'a' : 'A';

			ptr[i] = (ptr[i] - base + 13) % 26 + base;
		}

		i++;
	}
	return (str);
}
