#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: end of string */
		_putchar('\n'); /* print newline when /0 is reached */
		return;
	}
	/*Print the current character and make recursive call*/
	_putchar(*s);
	_puts_recursion(s + 1); /* Move to the next character in s*/
}
