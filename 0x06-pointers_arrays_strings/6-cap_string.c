#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: The input string.
*
* Return: A pointer to the resulting string.
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] == ' ' || ptr[i] == '\t' || ptr[i] == '\n' ||
		    ptr[i] == ',' || ptr[i] == ';' || ptr[i] == '.' ||
		    ptr[i] == '!' || ptr[i] == '?' || ptr[i] == '"' ||
		    ptr[i] == '(' || ptr[i] == ')' ||
		    ptr[i] == '{' || ptr[i] == '}')
		{
			if (ptr[i + 1] >= 'a' && ptr[i + 1] <= 'z')
				ptr[i + 1] -= 'a' - 'A';


		else if ((i == 0 || (ptr[i - 1] >= ' ' && ptr[i - 1] <= '}'))
			&& ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			/* the current character is the first character of a word, capitalize it */
			ptr[i] -= 'a' - 'A';
		}
		}
		i++;
	}
	return (str);
}

