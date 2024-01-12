#include "main.h"
/**
* _strcat - Concatenates 2 strings
* @dest: The destination string.
* @src: The sourse string.
*
* Return: A pointer to the resulting dest
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* find length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;
	/* append the source string to the destination strin */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	/* Null-terminate the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}
