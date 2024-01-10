#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		/* Base case: end of string */
		return;
	/* Make recursive call before printing the current character */
	_print_rev_recursion(s + 1); /* move to the next character in s */
	_putchar(*s); /* print the current  character */
}
