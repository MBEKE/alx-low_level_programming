#include "main.h"

/**
* _strncpy - Copies at most n bytes from source to destination
* @dest: The destination string.
* @src: The source string
* @n: The max number of the bytes to copy from src
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy at most n bytes from the source to destination */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* fill the remaining space in dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
