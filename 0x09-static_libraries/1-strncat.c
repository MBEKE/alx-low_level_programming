#include "main.h"
/**
* _strncat - concatenates 2 strings using at most n bytes from src
* @dest: The destination string
* @src: The source sring
* @n: The max number of bytes to concatenate from
*
* Return: A pointer to the resulting string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;
	/* append at most n bytes from the source string to the destination */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	/* null- terminate the resulting string */
	dest[dest_len + i] = '\0';
	return (dest);
}
