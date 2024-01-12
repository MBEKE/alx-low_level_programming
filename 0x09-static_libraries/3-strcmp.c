#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: A int < , == or > 0 if s1  is foound to
* respectively less than, to match or to be greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	s1++;
	s2++;
	}
	/* check for the case where the strings are not equal in length */
	return (*s1 - *s2);
}
