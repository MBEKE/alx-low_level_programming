#include "main.h"


int check_palindrome(char *s, int start, int end);

/**
 * _strlen - Returns the length of a string
 * @s:The string.
 *
 * Return: The length of the string
 */

int _strlen(char *s);

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Recursive helper function to check palindrome.
 * @s: The string to check.
 * @start: The starting string index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{

	/* Base case: if start and end cross each other,substring a palindrome */
	if (start >= end)
		return (1);
	/* If characters at start and end are equal */
	if (s[start] == s[end])
		/* Recursively check the remaining substring without these characters */
		return (check_palindrome(s, start + 1, end - 1));
	/* If characters are not equal, the substring is not a palindrome */
	return (0);
}
