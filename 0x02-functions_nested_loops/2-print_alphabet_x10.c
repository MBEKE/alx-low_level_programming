#include "main.h"

/**
* print_alphabet_x10 - prints 10 times alphabet
*
* Return: void
*/

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		for (; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		/* reset letter 'a' for the next iteration */

		letter = 'a';
		i++;
	}
}
