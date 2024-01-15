#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated mem space
 * @str: String to be copied
 *
 * Return: pointer to allocated space, NULL if unsuccessful
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);
	/* Calculate the length of the input strint */
	for ( ; str[length] != '\0'; length++)
		;
	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	/* Check if memory allocation is successful */
	if (duplicate == NULL)
		return (NULL);
	/* Copy the input string to the newly allocated memory */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	/* Return the pointer to the duplicated strin */
	return (duplicate);
}
