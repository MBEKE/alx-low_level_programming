#include "main.h"

/**
* _isdigit - checks for a digit(0-9)
*
* @c: character to be checked
* Return: 1 if c is a digit otherwise return 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
