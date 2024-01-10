#include "main.h"
#include <stddef.h>
/**
* _strchr - Locates a character in a string.
* @s: The input string
* @c: The character to locate
*
* Return: A pointer to the first occurrence of the character
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (*s == c ? s : NULL);
}