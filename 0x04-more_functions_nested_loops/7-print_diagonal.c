#include "main.h"

/**
* print_diagonal - draws a diagonl line on the terminal
*
* @n: the number of times the character \ should be printed
*
* Return: void
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int spaces, i;

		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
