#include "main.h"
/**
* _strcpy - copies string pointed to by scr to buffer pointed by dest
* @dest: destination buffer
* @src: source string
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0'; /* add the null terminator to destination string */
	return (dest);
}
