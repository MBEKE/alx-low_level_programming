#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string.
 *
 * Return: Pointer to  a newly allocated space in mem containin the
 * conctenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int length1 = 0, length2 = 0;
	unsigned int i, j;
	(void) j;

	/* Check if s1 is NULL,treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	/* Check if s2 is NULL,treat it as an empty string */
	if (s2 == NULL)
		s2 = "";
	/* Calculate length of s1 */
	for (; s1[length1] != '\0'; length1++)
		;
	/* Calculate length of s2 */
	for (; s2[length2] != '\0'; length2++)
		;
	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	/* Check if allocation is successful*/
	if (concatenated == NULL)
		return (NULL);
	/* Copy contents of s1 to the concatenated string */
	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];

	/* Copy contents of s2 to the concatenated string */
	for (j = 0; j < length2; j++, i++)
		concatenated[i] = s2[j];

	/* Add null terminator at the end of the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}
