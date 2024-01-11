#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: The first string.
 * @s2: The second string with '*' as a wildcard.
 *
 * Return: 1 if the strings can be considerd identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: If both strings are empty, they're identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* If '*' is encountered in s2, it can match any string */
	if (*s2 == '*')
		/**
		 *  Recursive cases:
		 *  1. '*' matches an empty string in s1
		 *  2. '*' matches with a non-empty string in s1
		 */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	/* If characters are equal or s2 has '?' continue matching */
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	/* If characters aren't equal and s2 have no '*', strings  nonidentical*/
	return (0);
}
