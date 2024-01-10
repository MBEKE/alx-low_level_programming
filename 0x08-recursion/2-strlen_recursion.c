#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: The string whose length is to be determined
 * Return: Leghth of string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		/* Base case */
		return (0);
	length = 1 + _strlen_recursion(s + 1);
	return (length);
}
