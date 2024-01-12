#include "main.h"
#include <stddef.h>

/**
* _strstr - Locates a substring.
* @haystack: The main string to search
* @needle: The substring to find
*
* Return: A pointer to the beginning of the located substring
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *start_haystack = haystack;
	char *current_haystack = haystack;
	char *current_needle = needle;

	while (*current_haystack == *current_needle && *current_needle != '\0')
	{
		current_haystack++;
		current_needle++;
	}
	if (*current_needle == '\0')
		return (start_haystack);
	haystack++;
	}
	return (NULL);
}
