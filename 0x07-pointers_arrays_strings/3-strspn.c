#include "main.h"

/**
* _strspn - Gets the lenghth of a prefix substring.
* @s: The string to be checked
* @accept: the prefix substring
* Return: no of bytes in innitial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			count++;
			found = 1;
			break;
		}
	}
	if (found == 0)
		break;
	}
	return (count);
}
