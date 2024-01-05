#include "main.h"

/**
* leet - Encodes a string into 1337
* @str: The input string
*
* Return: A pointer to the resulting string
*/
char *leet(char *str)
{
	char *ptr = str;
	int i = 0;

	while (ptr[i] != '\0')
	{
		int is_lower = (ptr[i] >= 'a' && ptr[i] <= 'z');
		int is_upper = (ptr[i] >= 'A' && ptr[i] <= 'Z');

		if (is_lower || is_upper)
		{
			if ((ptr[i] == 'a' || ptr[i] == 'A'))
				ptr[i] = '4';
			else if ((ptr[i] == 'e' || ptr[i] == 'E'))
				ptr[i] = '3';
			else if ((ptr[i] == 'o' || ptr[i] == 'O'))
				ptr[i] = '0';
			else if ((ptr[i] == 't' || ptr[i] == 'T'))
				ptr[i] = '7';
			else if ((ptr[i] == 'l' || ptr[i] == 'L'))
				ptr[i] = '1';
		}
		i++;
	}
	return (str);
}
