#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes of s2 to concatenate
 * *
 * Return: NULL if the function fails, otherwise return
 * pointer to the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty strin */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculatee teh length of s1 */
	while (s1[len1] != '\0')
		len1++;
	/* Calculate the length of s2 */
	while (s2[len2] != '\0')
		len2++;
	/* Allocate memory for the resulting conatenated string */
	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	/* Check for allocation failure */
	if (concatenated == NULL)
		return (NULL);
	/* Copy s1 to concatenated */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	/*Copy first n bytes of s2 to concatenated */
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		concatenated[i] = s2[j];
	/* Add the null terminator to the resulting string */
	concatenated[i] = '\0';

	return (concatenated);
}
