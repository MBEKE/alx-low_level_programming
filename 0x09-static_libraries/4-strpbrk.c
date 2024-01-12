#include<stdio.h>
#include "main.h"
#include <stddef.h>
/**
* _strpbrk - Searches a string foor any of a set of bytes
* @s: The input string
* @accept: The set of bytes to search for
*
* Return: A pointer to the byte in s that matches on of the
*bytes in accept or NULL if no such byt is found
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *currentAccept = accept;

		while (*currentAccept != '\0')
		{
			if (*s == *currentAccept)
				return (s);
			currentAccept++;
		}
		s++;
	}
	return (NULL);
}
